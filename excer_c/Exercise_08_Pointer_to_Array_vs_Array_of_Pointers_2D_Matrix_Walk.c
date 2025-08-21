/* ex08.c
 * PLOT:
 *   Differentiate between int (*pa)[N] and int *ap[N]. Fill and print a matrix with each style.
 *
 * STORY POINTS:
 *   [SP-1] Create a real 2D array int m[3][4].
 *   [SP-2] Use int (*row)[4] = m; walk rows with pointer to array.
 *   [SP-3] Create an array of 4 int pointers, each pointing into a 1D row, and print via ap[r][c].
 *
 * HINTS:
 *   - §9 pointers to arrays vs arrays of pointers
 *   - §24 multidimensional arrays
 */

#include <stdio.h>

int main(void) {
    int m[3][4] = {0};

    // [SP-1] Fill
    for (int r = 0; r < 3; ++r)
        for (int c = 0; c < 4; ++c)
            m[r][c] = r * 10 + c;

    // [SP-2]
    int (*row)[4] = m;
    puts("Via pointer to array:");
    for (int r = 0; r < 3; ++r) {
        for (int c = 0; c < 4; ++c)
            printf("%2d ", row[r][c]);
        printf("\n");
    }

    // [SP-3]
    int *ap[3];
    for (int r = 0; r < 3; ++r)
        ap[r] = m[r];

    puts("Via array of pointers:");
    for (int r = 0; r < 3; ++r) {
        for (int c = 0; c < 4; ++c)
            printf("%2d ", ap[r][c]);
        printf("\n");
    }

    return 0;
}
