/* ex05.c
 * PLOT:
 *   Show const correctness, volatile (simulate HW changing a value), and a restrict-optimized add_vec.
 *
 * STORY POINTS:
 *   [SP-1] const int *p1 (try to write through it -> should not compile).
 *   [SP-2] volatile int v; spin on it, emulate external change.
 *   [SP-3] Implement add_vec with restrict and benchmark (optional).
 *
 * HINTS:
 *   - §6 qualifiers
 *   - §20 restrict
 */

#include <stdio.h>
#include <stddef.h>

void add_vec(size_t n, float * restrict a,
             const float * restrict b,
             const float * restrict c)
{
    for (size_t i = 0; i < n; ++i)
        a[i] = b[i] + c[i];
}

int main(void) {
    int x = 10;
    const int *p1 = &x;
    // *p1 = 20; // [SP-1] Uncomment -> should be compile error

    volatile int v = 0;
    // [SP-2] We'll just show repeated reads (the compiler cannot optimize them away)
    for (int i = 0; i < 3; ++i)
        printf("volatile read #%d: %d\n", i, v);

    float a[3], b[3] = {1,2,3}, c[3] = {4,5,6};
    add_vec(3, a, b, c);
    printf("a: %f %f %f\n", a[0], a[1], a[2]);

    return 0;
}
