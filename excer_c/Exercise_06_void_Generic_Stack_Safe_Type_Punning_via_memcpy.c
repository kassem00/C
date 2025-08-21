/* ex06.c
 * PLOT:
 *   Implement a generic stack using void* and byte-sized storage; push/pop ints and doubles safely using memcpy.
 *   Also contrast with a UB strict-aliasing example (commented).
 *
 * STORY POINTS:
 *   [SP-1] Define a stack struct with unsigned char *buffer, size, top.
 *   [SP-2] Provide push(void *src, size_t sz) and pop(void *dst, size_t sz) using memcpy.
 *   [SP-3] Push an int and a double, then pop them back correctly.
 *   [SP-4] In a comment, show a UB cast you'd better not do.
 *
 * HINTS:
 *   - §7 void*
 *   - §1, §13, §26 memcpy
 *   - Strict aliasing section from previous message
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    unsigned char *buf;
    size_t cap, top;
} ByteStack;

int init_stack(ByteStack *s, size_t cap) {
    s->buf = malloc(cap);
    if (!s->buf) return -1;
    s->cap = cap; s->top = 0;
    return 0;
}

void free_stack(ByteStack *s) {
    free(s->buf);
    s->buf = NULL;
    s->cap = s->top = 0;
}

int push(ByteStack *s, const void *src, size_t sz) {
    if (s->top + sz > s->cap) return -1;
    memcpy(s->buf + s->top, src, sz);
    s->top += sz;
    return 0;
}

int pop(ByteStack *s, void *dst, size_t sz) {
    if (s->top < sz) return -1;
    s->top -= sz;
    memcpy(dst, s->buf + s->top, sz);
    return 0;
}

int main(void) {
    ByteStack st;
    if (init_stack(&st, 1024)) return 1;

    int    x = 1234;
    double d = 3.14;

    push(&st, &x, sizeof x);
    push(&st, &d, sizeof d);

    double d2;
    int    x2;

    pop(&st, &d2, sizeof d2);
    pop(&st, &x2, sizeof x2);

    printf("x2=%d, d2=%f\n", x2, d2);

    // [SP-4] UB example (DO NOT DO):
    // int *pi = (int *)&d; // Violates strict aliasing

    free_stack(&st);
    return 0;
}
