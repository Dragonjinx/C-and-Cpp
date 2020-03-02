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
#define SIZE 30
#endif

typedef char Item;

typedef struct stack{
    unsigned int count;
    char array[SIZE][SIZE];
}Stack;

Stack push(Stack a, char b[]); //Adds an element to the top of the stack
void Dumpstack(Stack a, char *b);
int isfull(Stack a); //Returns 1 of the stack is full
int isempty(Stack a); //Returns 1 of the stack is empty

#endif