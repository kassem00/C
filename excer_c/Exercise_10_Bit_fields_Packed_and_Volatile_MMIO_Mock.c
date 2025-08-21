/* ex10.c
 * PLOT:
 *   Mock an MMIO register block, show volatile access, demonstrate why bit-fields are risky, then do masks instead.
 *
 * STORY POINTS:
 *   [SP-1] Define a volatile packed struct Reg with bit-fields (mode:3, en:1, val:12).
 *   [SP-2] Write to en via REG->en = 1; print to confirm.
 *   [SP-3] Re-implement writes using masks & shifts with a plain volatile uint32_t register.
 *
 * HINTS:
 *   - §16 bit-fields + pointer access
 *   - §21 volatile pointers
 */

#include <stdio.h>
#include <stdint.h>

struct __attribute__((packed)) Reg {
    unsigned mode : 3;
    unsigned en   : 1;
    unsigned val  : 12;
};

volatile struct Reg REG_bits = {0};         // Mock, not real HW
volatile uint32_t  REG_plain = 0;           // Plain MMIO word

#define MODE_Pos 0
#define MODE_Msk (0x7u << MODE_Pos)
#define EN_Pos   3
#define EN_Msk   (0x1u << EN_Pos)
#define VAL_Pos  4
#define VAL_Msk  (0xFFFu << VAL_Pos)

int main(void) {
    // [SP-2] bit-fields
    REG_bits.en = 1;
    REG_bits.mode = 5;
    REG_bits.val = 0xABC;
    printf("bitfields: en=%u mode=%u val=%u\n", REG_bits.en, REG_bits.mode, REG_bits.val);

    // [SP-3] masks
    REG_plain |= EN_Msk;
    REG_plain = (REG_plain & ~MODE_Msk) | (5u << MODE_Pos);
    REG_plain = (REG_plain & ~VAL_Msk) | (0xABCu << VAL_Pos);
    printf("plain: 0x%08X\n", (unsigned)REG_plain);

    return 0;
}
