/* ex07.c
 * PLOT:
 *   Build a tiny command dispatcher using an array of function pointers.
 *
 * STORY POINTS:
 *   [SP-1] Declare 3 int f(void) functions.
 *   [SP-2] Put them in an array int (*fpa[])(void).
 *   [SP-3] Ask the user which one to call, then call it via pointer.
 *   [SP-4] Also keep a pointer to a function that returns another pointer type.
 *
 * HINTS:
 *   - §8 Function pointers
 */

#include <stdio.h>

int f0(void) { puts("f0"); return 0; }
int f1(void) { puts("f1"); return 1; }
int f2(void) { puts("f2"); return 2; }

int *ret_ip(void) {
    static int v = 42;
    return &v;
}

int main(void) {
    int (*fpa[])(void) = { f0, f1, f2 };

    int choice = 0;
    printf("0..2? ");
    scanf("%d", &choice);

    if (choice >= 0 && choice < (int)(sizeof(fpa)/sizeof(fpa[0]))) {
        int r = fpa[choice]();
        printf("result=%d\n", r);
    }

    int *(*pf2)(void) = ret_ip;
    printf("ret_ip -> %d\n", *pf2());

    return 0;
}
