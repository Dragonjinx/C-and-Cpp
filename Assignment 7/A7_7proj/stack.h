#ifndef HEADERCALLED
#define HEADERCALLED

struct stack{
    unsigned int count;
    int array[12];
};

struct stack push(struct stack a, int b); //Adds an element to the top of the stack
struct stack pop(struct stack a); //Removes the last element of the stack
struct stack empty(struct stack a); //Removes all elements of the stack
int isfull(struct stack a); //Returns 1 of the stack is full
int isempty(struct stack a); //Returns 1 of the stack is empty

#endif