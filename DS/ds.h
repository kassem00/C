/**
 * File: main.h
 * Description: Header file containing function prototypes and data structures
 *              for implementing linked list, stack, and queue.
 * Author: [Your Name]
 */

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct node - Node structure for linked list
 * @data: Integer data stored in node
 * @next: Pointer to the next node
 */
typedef struct node
{
    int data;
    struct node *next;
} ST_listNode_t;

/**
 * struct list - Structure for linked list
 * @head: Pointer to the first node in the list
 * @listSize: The number of nodes in the list
 */
typedef struct list
{
    ST_listNode_t *head;
    int listSize;
} ST_list_t;

/**
 * createEmptyList - Initializes an empty linked list
 * @list: Pointer to the list to initialize
 * Return: void
 */
void createEmptyList(ST_list_t *list);

/**
 * insertToList - Inserts an element at a specific position in the list
 * @list: Pointer to the list
 * @position: Position where the element should be inserted
 * @data: The data to insert
 * Return: 0 on success, -1 on failure
 */
int insertToList(ST_list_t *list, int position, int data);

/**
 * deleteFromList - Deletes an element from a specific position in the list
 * @list: Pointer to the list
 * @position: Position of the element to be deleted
 * Return: 0 on success, -1 on failure
 */
int deleteFromList(ST_list_t *list, int position);

/**
 * printList - Prints all elements in the linked list
 * @list: Pointer to the list
 * Return: 0 on success, -1 on failure
 */
int printList(ST_list_t *list);

/**
 * getNodeData - Retrieves data from a specific node in the list
 * @list: Pointer to the list
 * @nodeNumber: The node index to retrieve data from
 * @nodeData: Pointer to store retrieved data
 * Return: 0 on success, -1 on failure
 */
int getNodeData(ST_list_t *list, int nodeNumber, int *nodeData);

/**
 * isTail - Checks if a node is the last node in the list
 * @node: Node to check
 * Return: 1 if it is the last node, 0 otherwise
 */
int isTail(ST_listNode_t node);

/**
 * isEmpty - Checks if the linked list is empty
 * @list: Pointer to the list
 * Return: 1 if empty, 0 otherwise
 */
int isEmpty(ST_list_t *list);

/**
 * struct stack - Structure for stack
 * @elements: Array to store stack elements
 * @top: Index of the top element in the stack
 */
typedef struct stack
{
    int elements[STACK_SIZE];
    int top;
} ST_stack_t;

/**
 * createEmptyStack - Initializes an empty stack
 * @stack: Pointer to the stack to initialize
 * Return: void
 */
void createEmptyStack(ST_stack_t *stack);

/**
 * push - Pushes an element onto the stack
 * @stack: Pointer to the stack
 * @data: Data to push
 * Return: 0 on success, -1 on failure
 */
int push(ST_stack_t *stack, int data);

/**
 * pop - Pops an element from the stack
 * @stack: Pointer to the stack
 * @data: Pointer to store popped data
 * Return: 0 on success, -1 on failure
 */
int pop(ST_stack_t *stack, int *data);

/**
 * printStack - Prints all elements in the stack
 * @stack: Pointer to the stack
 * Return: 0 on success, -1 on failure
 */
int printStack(ST_stack_t *stack);

/**
 * getStackTop - Retrieves the top element from the stack without removing it
 * @stack: Pointer to the stack
 * Return: Top element, or -1 if stack is empty
 */
int getStackTop(ST_stack_t *stack);

/**
 * isFull - Checks if the stack is full
 * @stack: Pointer to the stack
 * Return: 1 if full, 0 otherwise
 */
int isFull(ST_stack_t *stack);

/**
 * isEmpty - Checks if the stack is empty
 * @stack: Pointer to the stack
 * Return: 1 if empty, 0 otherwise
 */
int isEmpty(ST_stack_t *stack);

/**
 * struct queue - Structure for queue
 * @elements: Array to store queue elements
 * @front: Index of the front element in the queue
 * @rear: Index of the rear element in the queue
 */
typedef struct queue
{
    int elements[QUEUE_SIZE];
    int front;
    int rear;
} ST_queue_t;

/**
 * createEmptyQueue - Initializes an empty queue
 * @queue: Pointer to the queue to initialize
 * Return: void
 */
void createEmptyQueue(ST_queue_t *queue);

/**
 * enqueue - Adds an element to the rear of the queue
 * @queue: Pointer to the queue
 * @data: Data to add
 * Return: 0 on success, -1 on failure
 */
int enqueue(ST_queue_t *queue, int data);

/**
 * dequeue - Removes an element from the front of the queue
 * @queue: Pointer to the queue
 * @data: Pointer to store dequeued data
 * Return: 0 on success, -1 on failure
 */
int dequeue(ST_queue_t *queue, int *data);

/**
 * printQueue - Prints all elements in the queue
 * @queue: Pointer to the queue
 * Return: 0 on success, -1 on failure
 */
int printQueue(ST_queue_t *queue);

/**
 * getQueueFront - Retrieves the front element of the queue without removing it
 * @queue: Pointer to the queue
 * Return: Front element, or -1 if queue is empty
 */
int getQueueFront(ST_queue_t *queue);

/**
 * getQueueRear - Retrieves the rear element of the queue without removing it
 * @queue: Pointer to the queue
 * Return: Rear element, or -1 if queue is empty
 */
int getQueueRear(ST_queue_t *queue);

/**
 * isFull - Checks if the queue is full
 * @queue: Pointer to the queue
 * Return: 1 if full, 0 otherwise
 */
int isFull(ST_queue_t *queue);

/**
 * isEmpty - Checks if the queue is empty
 * @queue: Pointer to the queue
 * Return: 1 if empty, 0 otherwise
 */
int isEmpty(ST_queue_t *queue);

#endif /* MAIN_H */
