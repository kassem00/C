/* ex01.c
 * PLOT:
 *   Warm up. Declare a zoo of pointer types, print their sizes, and confirm the
 *   size of the pointed-to objects using sizeof *p.
 *
 * STORY POINTS:
 *   [SP-1] Declare at least: int*, char*, double*, int**, pointer-to-array, array-of-pointers, function pointer.
 *   [SP-2] Initialize some with stack variables, some left uninitialized (but don't dereference uninitialized).
 *   [SP-3] Print sizeof(pointer) vs sizeof(*pointer).
 *   [SP-4] Explain in a comment why all pointer sizes are equal on your platform.
 *
 * HINTS:
 *   - §1 Declarations
 *   - §13 sizeof with pointers
 */

#include <stdio.h>

int foo(double d) { return (int)d; }

int main(void) {
    // [SP-1] TODO: declare all pointer species here
    int x = 42;
    // e.g.:
    int *pi = &x;                 // TODO complete the rest
    char *pc = NULL;              // etc.
    double *pd = NULL;
    int **ppi = &pi;
    int (*pa)[10] = NULL;
    int *ap[10] = {0};
    int (*fp)(double) = foo;

    // [SP-3] Print sizes
    printf("sizeof(pi)=%zu, sizeof(*pi)=%zu\n", sizeof(pi), sizeof(*pi));
    // TODO: print for all the others

    // [SP-4] In comment: explain equal pointer sizes (flat address space, LP64/LLP64 ABI)
    return 0;
}
