#include <stdint.h>
#include "kprintf.h"  // 你自定義的 kprintf()

//-----------------------------------------------------------------
// 假設環境: CLINT_BASE = 0x02000000, mtime=0xBFF8, mtimecmp=0x4000
//-----------------------------------------------------------------
#define CLINT_BASE          0x02000000UL
#define CLINT_MTIME_LO      (CLINT_BASE + 0xBFF8)
#define CLINT_MTIME_HI      (CLINT_BASE + 0xBFFC)
#define CLINT_MTIMECMP_LO   (CLINT_BASE + 0x4000)
#define CLINT_MTIMECMP_HI   (CLINT_BASE + 0x4004)
#define CSR_MSCRATCH 0x340

//-----------------------------------------------------------------
// [新增] 讀取 mip (Machine Interrupt Pending)
//   - 若 bit7=1 => Timer中斷掛起, bit3=1 => Software中斷掛起...
//-----------------------------------------------------------------
static inline uint32_t csrrs_mscratch(uint32_t set_bits) {
    uint32_t old_val;
    asm volatile(
        "csrrs %0, %1, %2"
        : "=r"(old_val)
        : "i"(CSR_MSCRATCH), "r"(set_bits)
    );
    return old_val;
}

//-----------------------------------------------------------------
// 1) 讀取 64-bit mtime
//    不使用任何 64-bit 除法/餘數，僅做加/減/判斷即可
//-----------------------------------------------------------------
static inline uint64_t read_mtime(void)
{
    volatile uint32_t *lo_ptr = (uint32_t *)CLINT_MTIME_LO;
    volatile uint32_t *hi_ptr = (uint32_t *)CLINT_MTIME_HI;

    // 為了簡化，直接 "先讀 hi，再讀 lo" (如果要更嚴謹，可反覆讀兩次)
    uint32_t hi = *hi_ptr;
    uint32_t lo = *lo_ptr;

    return ((uint64_t)hi << 32) | lo;
}

//-----------------------------------------------------------------
// 2) 寫入 64-bit mtimecmp
//    同樣不用任何除法操作
//-----------------------------------------------------------------
static inline void write_mtimecmp(uint64_t val)
{
    volatile uint32_t *lo_ptr = (uint32_t *)CLINT_MTIMECMP_LO;
    volatile uint32_t *hi_ptr = (uint32_t *)CLINT_MTIMECMP_HI;

    // 避免 race condition: 推薦先把 high 寫為 0xFFFFFFFF
    // 再寫 low，最後寫正確的 high
    uint32_t lo = (uint32_t)(val & 0xFFFFFFFFULL);
    uint32_t hi = (uint32_t)(val >> 32);

    *hi_ptr = 0xFFFFFFFF;
    *lo_ptr = lo;
    *hi_ptr = hi;
}
static inline uint32_t read_csr_mscratch() {
    uint32_t value;
    asm volatile(
        "csrr %0, %1"
        : "=r"(value)
        : "i"(CSR_MSCRATCH)
    );
    return value;
}
//-----------------------------------------------------------------
// 3) 主程式，不含任何標準函式庫
//-----------------------------------------------------------------
int main(void)
{
    uint64_t now = read_mtime();
    uint64_t interval = 100000000ULL;
    write_mtimecmp(now + interval);
    uint64_t last_print_time = now;
    int flag = 0;
    uint32_t set_bits = 0x00000000;
    csrrs_mscratch(set_bits);
    printf("mscratch=0x%08x\n", read_csr_mscratch());
    while (1)
    {
        uint64_t curr = read_mtime();
        uint64_t diff = curr - last_print_time;
        if (diff >= 5000000ULL)
        {
            if(flag == 0) {
                set_bits = 0x00FFFF00;
                flag = 1;
            }
            csrrs_mscratch(set_bits);
            printf("mscratch=0x%08x\n", read_csr_mscratch());
            last_print_time = curr;
        }
    }
    return 0;
}
