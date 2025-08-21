/* ex09.c
 * PLOT:
 *   Implement a tiny intrusive singly-linked list. Use container_of to get the parent struct from the next pointer.
 *
 * STORY POINTS:
 *   [SP-1] Define struct Node { int data; struct Node *next; }.
 *   [SP-2] Define a larger struct wrapping Node as a member (e.g., struct Thing { Node n; char name[16]; }).
 *   [SP-3] Push a few Things into a Node* head, but recover Thing* via container_of when traversing.
 *
 * HINTS:
 *   - §15 container_of
 */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

struct Node {
    struct Node *next;
};

#define container_of(ptr, type, member) \
    ((type *)((char *)(ptr) - offsetof(type, member)))

struct Thing {
    struct Node node;
    char name[16];
    int value;
};

void push(struct Node **head, struct Node *n) {
    n->next = *head;
    *head = n;
}

int main(void) {
    struct Thing a = { .name = "A", .value = 1 };
    struct Thing b = { .name = "B", .value = 2 };
    struct Thing c = { .name = "C", .value = 3 };

    struct Node *head = NULL;
    push(&head, &a.node);
    push(&head, &b.node);
    push(&head, &c.node);

    for (struct Node *n = head; n; n = n->next) {
        struct Thing *t = container_of(n, struct Thing, node);
        printf("Thing: %s -> %d\n", t->name, t->value);
    }

    return 0;
}
