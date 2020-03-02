/*
CH-230-A
a7 p6.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct person{
    char name[30];
    int age;
};

int Namecmpr(struct person a, struct person b);
int agecmpr(struct person a, struct person b);
void Bubble(struct person *point, int size, int compare(struct person, struct person));
void slapitondascreen(struct person *point, int size);

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    struct person *list = (struct person *) malloc(sizeof(struct person) * n);
    if(list == NULL)
    {
        exit(1);
    }
    for(int i = 0; i < n; i++)
    {
        fgets(list[i].name, 30, stdin);
        sscanf(list[i].name,"%s\n", list[i].name);
        scanf("%d", &list[i].age);
        getchar();
    }
    Bubble(list, n, Namecmpr);
    slapitondascreen(list, n);
    Bubble(list, n, agecmpr);
    slapitondascreen(list, n);
    return 0;
}

void Bubble(struct person *point, int size, int compare(struct person, struct person))
{
    bool swap = true;
    struct person temporary;
    while(swap == true)
    {
        swap = false;
        for(int i = 0; i < (size-1) ; i++)
        {
            if(compare(point[i], point[i+1]) == 1)
            {
                temporary = point[i];
                point[i] = point[i+1];
                point[i+1] = temporary; 
                swap = true;
            }
        }
    }
}

int agecmpr(struct person a, struct person b)
{
    int a1 = a.age;
    int b1 = b.age;
    if(a1 > b1)
    {
        return 1;
    }
    else
        return 0;
}

int Namecmpr(struct person a, struct person b)
{
    char a1 = a.name[1];
    char b1 = b.name[1];
    if(a1 > b1)
    {
        return 1;
    }
    else if(a1 == b1)
    {
        int aged = agecmpr(a, b);
        return aged;
    }
    else
        return 0;
}

void slapitondascreen(struct person *point, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("{%s, %d}; ", point[i].name, point[i].age);
    }
    printf("\n");
}