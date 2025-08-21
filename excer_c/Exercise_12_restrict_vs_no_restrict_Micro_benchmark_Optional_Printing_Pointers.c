/* ex12.c
 * PLOT:
 *   Show how to print pointers portably, and (optionally) compare performance of restrict vs non-restrict.
 *
 * STORY POINTS:
 *   [SP-1] Declare two pointers p and q pointing to same array; print them with %p (cast to void*).
 *   [SP-2] Implement two versions of a vector add: one with restrict, one without.
 *   [SP-3] (Optional) Time both with large sizes (not shown—just structure it).
 *
 * HINTS:
 *   - §28 printf("%p")
 *   - §20 restrict
 */

#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

void add_nr(size_t n, float *a, const float *b, const float *c) {
    for (size_t i = 0; i < n; ++i)
        a[i] = b[i] + c[i];
}
void add_rs(size_t n, float * restrict a, const float * restrict b, const float * restrict c) {
    for (size_t i = 0; i < n; ++i)
        a[i] = b[i] + c[i];
}

int main(void) {
    int x = 1, y = 2;
    int *p = &x;
    int *q = &y;
    printf("p=%p q=%p\n", (void*)p, (void*)q);

    float a[3], b[3] = {1,2,3}, c[3] = {4,5,6};
    add_nr(3, a, b, c);
    printf("a (nr): %f %f %f\n", a[0], a[1], a[2]);

    add_rs(3, a, b, c);
    printf("a (rs): %f %f %f\n", a[0], a[1], a[2]);
    return 0;
}
