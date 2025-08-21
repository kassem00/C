/* ex02.c
 * PLOT:
 *   Practice & and * on scalars, structs, and pointer-to-pointer. Mutate through all levels.
 *
 * STORY POINTS:
 *   [SP-1] Define a struct S { int a; };
 *   [SP-2] Create S s, S *ps, and int **pp pointing to an int inside the struct.
 *   [SP-3] Write through ps-> and through **pp and show both mutate the same memory.
 *
 * HINTS:
 *   - §2 Address-of & dereference
 *   - §5 -> vs .
 */

#include <stdio.h>

struct S { int a; };

int main(void) {
    // [SP-1] + [SP-2]
    struct S s = { .a = 1 };
    struct S *ps = &s;

    int *p = &ps->a;
    int **pp = &p;

    // [SP-3] Mutate through all paths and print
    *p = 10;
    printf("s.a = %d\n", s.a);

    **pp = 20;
    printf("s.a = %d\n", s.a);

    ps->a = 30;
    printf("s.a = %d\n", s.a);

    return 0;
}
