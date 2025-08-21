/* ex03.c
 * PLOT:
 *   Walk an array with pointer arithmetic. Compute distance between two pointers.
 *   Demonstrate one-past-the-end (without dereferencing).
 *
 * STORY POINTS:
 *   [SP-1] Create int a[5] = {0,1,2,3,4}, get int *p = a.
 *   [SP-2] Print *(p+i) using pointer arithmetic only.
 *   [SP-3] Compute (a+5) - (a) and print it (expect 5).
 *   [SP-4] Get a pointer one past the last element & show it's legal to compare but illegal to dereference.
 *
 * HINTS:
 *   - §3 Pointer arithmetic
 *   - §25 One past end
 */

#include <stdio.h>
#include <stddef.h>

int main(void) {
    int a[5] = {0,1,2,3,4};
    int *p = a;

    // [SP-2]
    for (int i = 0; i < 5; ++i) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    // [SP-3]
    ptrdiff_t diff = (a + 5) - a;
    printf("diff = %td\n", diff);

    // [SP-4]
    int *past = a + 5;
    printf("past > a? %d\n", past > a);
    // *past; // TODO: Uncomment to see UB (DON'T actually run!)
    return 0;
}
