#ifndef HEADERCALLED
#define HEADERCALLED

/*
CH-230-A
a8 p4.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#ifndef BASE
#define BASE 2
#endif

#ifndef SIZE
#define SIZE 16
#endif

typedef struct stack{
    unsigned int count;
    int array[SIZE];
}Stack;

Stack push(Stack a, int b); //Adds an element to the top of the stack
Stack pop(Stack a); //Removes the last element of the stack
Stack empty(Stack a); //Removes all elements of the stack
Stack binConvert(Stack a,int b);
int isfull(Stack a); //Returns 1 of the stack is full
int isempty(Stack a); //Returns 1 of the stack is empty

#endif