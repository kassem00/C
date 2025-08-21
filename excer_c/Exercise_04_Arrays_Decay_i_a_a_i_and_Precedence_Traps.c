/* ex04.c
 * PLOT:
 *   Show array-to-pointer decay, prove i[a] == a[i], and play with *p++ vs (*p)++ vs *++p vs ++*p.
 *
 * STORY POINTS:
 *   [SP-1] Make an array, get a pointer via decay.
 *   [SP-2] Demonstrate i[a] == a[i].
 *   [SP-3] Implement a loop that uses *p++ to print values, then reset and use (*p)++ to mutate.
 *   [SP-4] Comment which expression increments what.
 *
 * HINTS:
 *   - §4 Arrays & decay
 *   - §10 Precedence traps
 */

#include <stdio.h>

int main(void) {
    int a[4] = {10, 20, 30, 40};
    int *p = a;

    // [SP-2]
    int i = 2;
    printf("a[i]=%d, i[a]=%d\n", a[i], i[a]);

    // [SP-3] using *p++
    p = a;
    printf("Using *p++: ");
    for (int j = 0; j < 4; ++j) {
        printf("%d ", *p++); // *(p++)
    }
    printf("\n");

    // Reset and use (*p)++ to mutate
    p = a;
    printf("Before (*p)++: %d\n", *p);
    (*p)++;
    printf("After  (*p)++: %d\n", *p);

    // [SP-4] Comment in code what each variant does (already in cheat sheet)
    return 0;
}
