/* ex11.c
 * PLOT:
 *   Query alignment of several types, force alignas, and use compound literals to get temporary objects' addresses.
 *
 * STORY POINTS:
 *   [SP-1] Print _Alignof for int, double, struct {char; double;}.
 *   [SP-2] Declare _Alignas(32) int arr[8]; print its address mod 32.
 *   [SP-3] Take the address of compound literals and print their values.
 *
 * HINTS:
 *   - §17 Alignment
 *   - §18 Compound literals
 */

#include <stdio.h>
#include <stdalign.h>

struct Foo { char c; double d; };

int main(void) {
    printf("_Alignof(int)=%zu\n", _Alignof(int));
    printf("_Alignof(double)=%zu\n", _Alignof(double));
    printf("_Alignof(struct Foo)=%zu\n", _Alignof(struct Foo));

    _Alignas(32) int aligned[8];
    printf("aligned addr %% 32 = %zu\n", (size_t)((uintptr_t)aligned % 32));

    int *p = &(int){ 42 };
    struct Foo *pf = &(struct Foo){ .c = 'X', .d = 3.14 };
    printf("compound: *p=%d, pf->c=%c, pf->d=%f\n", *p, pf->c, pf->d);

    return 0;
}
