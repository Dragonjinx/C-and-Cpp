#include <stdio.h>

int main()
{
    double a;
    float b;
    int c;

    printf("Enter a double:\n");
    scanf("%lf", &a);
    getchar();
    printf("Enter a float:\n");
    scanf("%f", &b);
    getchar();
    printf("Enter an integer:\n");
    scanf("%d", &c);
    getchar();

    double reasult; // No information is lost unless there is floating point arithmetic error
    reasult = a * b * c;
    printf("The reasult of the product of the 3 values is:\n%lf\n", reasult);
    double *r_ptr = &reasult;
    *r_ptr += 5;
    printf("The new value printed using pointers:\n%lf\n", *r_ptr);
    printf("The new value printed using variables:\n%lf\n", reasult);
    return 0;
}