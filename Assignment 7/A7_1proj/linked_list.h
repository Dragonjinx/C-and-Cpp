#ifndef ALREADYCALLED //To prevent errors on double inclusion
#define ALREADYCALLED

struct list 
{
    int elem;
    struct list *nxtelm;
};

void printerlist(struct list *a);
struct list* addbehind(struct list *a, int b);
struct list* addinfront(struct list *a, int b);
struct list* removefirst(struct list *a);
void YEET(struct list *a);

#endif