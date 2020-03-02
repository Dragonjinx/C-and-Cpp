#ifndef CALLED
#define CALLED
#define MAXIMUM 10

typedef struct node
{
    int item;
    struct node *next;
}Node;

typedef struct queue
{
    Node *first;
    Node *last;
    unsigned int size;
}Queue;

int checkqueue(Queue a);
/*  Returns 1 if full
    Returns -1 if empty
    Returns 0 for all other states
*/

void printQueue(Queue a);
/* Prints the contents of the queue */

void AddItem(Queue *a, int b);
/* Adds items to the queue for all states of the queue */

void NextInLine(Queue *a);
/* Moves forward with the queue (Removes first element) */

void CleanExit(Queue *a);
/* Deallocates the memory for all nodes in the queue */

#endif