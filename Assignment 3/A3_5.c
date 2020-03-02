/*
CH-230-A
a3 p5.c
Abhilekh Pandey
ab.pandey@jacobs-university.de
*/

#include <stdio.h>


/*  Usage of global variables because I find it easier than passing them
    from one local variable to the next */
double celcius[100];

int n;

void tempadder(void); //Takes the temperature input

double summer(int p); //Computes the sum of all input temperatures

void lister(int p); //Lists all the temperatures

void Fahrenheit(int p); //Lists all the temperatures in Fahrenheit

void average(int p); //Gives the mean of the temperatures

int main()
{

    char c;

    printf("Enter Conversion Specifier\n");

    scanf("%c", &c);

    getchar();

    printf("Enter Temperatures \n");

    tempadder();

    switch (c)
    {

    case 115:

        printf("The sum of the temperatures is: %lf \n", summer(n));

        break;

    case 112:

        lister(n);

        break;

    case 116:

        Fahrenheit(n);

        break;

    default:

        average(n);
    }

    return 0;
}

void tempadder(void)
{

    int a;

    do
    {
        scanf("%d", &a);

        if (a < 0)
        {

            printf("Invalid input. Please try again.\n");
        }
    } while (a < 0);

    for (int i = 1; i <= a; i++)
    {

        double b;

        scanf("%lf", &b);

        celcius[i] = b;

        n = i;
    }
}

double summer(int p)
{

    double sum = 0;

    for (int i = 1; i <= p; i++)
    {

        sum += celcius[i];
    }

    return sum;
}

void lister(int p)
{

    printf("List of all temperatures: \n");

    for (int i = 1; i <= p; i++)
    {

        printf("%3lf     ", celcius[i]);

        if (i % 10 == 0)
        {

            printf("\n");
        }
    }

    printf("\n");
}

void Fahrenheit(int p)
{

    printf("List of all temperatures in Fahrenheit: \n");

    for (int i = 1; i <= p; i++)
    {

        double conversion = (9 / 5) * (celcius[i]) + 32;

        printf("%3lf     ", conversion);

        if (i % 10 == 0)
        {

            printf("\n");
        }
    }

    printf("\n");
}

void average(int p)
{

    double avg;

    avg = summer(p) / p;

    printf("The arithmatic mean of all temperatures is: %lf \n", avg);
}