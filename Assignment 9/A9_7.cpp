/*
CH-230-A
a9 p7.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
//#define SIZE 30

int myfirst(int a[], int n);
double myfirst(double a[], int n);
char myfirst(char a[], int n);

int main(void)
{
    int n;
    char c;

    std::cout << "Enter the maximum size for your arrays" << std::endl;
    std::cin >> n;

    int intarr[n];
    double dblarr[n];
    char chararr[n];

    //Loop for user input on int array
    std::cout << "Please enter the values for your int array: " << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> intarr[i];
    }
    //Loop for user input on double array
    std::cout << "Please enter the values for your double array: " << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> dblarr[i];
    }
    //Loop for user input on char array
    std::cout << "Please enter the values for your character array: " << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> chararr[i];
        std::cin.ignore();
    }

    while (c != 'q')
    {
        std::cout << "which mode do you want to work in?" << std::endl;
        std::cout << "Integer (i), Double (d), Character (c), Quit (q)" << std::endl;
        std::cin >> c;
        std::cin.ignore();

        switch (c)
        {
        case 'i':
            if (myfirst(intarr, n) != -1)
            {
                std::cout << "The first positive even value is: " << myfirst(intarr, n) << std::endl;
                std::cout << std::endl;
            }
            else
            {
                std::cout << "There is no positive even value in the array." << std::endl;
                std::cout << std::endl;
            }
            break;

        case 'd':
            if (myfirst(dblarr, n) != -1.1)
            {
                std::cout << "The first negetive element which does not have a fractional part is: "
                          << myfirst(dblarr, n) << std::endl;
                std::cout << std::endl;
            }
            else
            {
                std::cout << "There is no negetive element which does not have a fractional part." << std::endl;
                std::cout << std::endl;
            }

            break;

        case 'c':
            if (myfirst(chararr, n) != '0')
            {
                std::cout << "The first consonant is: " << myfirst(chararr, n) << std::endl;
                std::cout << std::endl;
            }
            else
            {
                std::cout << "There is no consonant in the array." << std::endl;
                std::cout << std::endl;
            }
            break;

        case 'q':
            std::cout << "Quitting" << std::endl;
            break;

        }
    }
    return 0;
}

int myfirst(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && (a[i] % 2) == 0) //If number is even, there should be no remainder when dividing by 2
        {
            return a[i];
        }
    }
    return -1;
}

double myfirst(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((a[i] < 0) && (a[i] - (int)a[i] == 0.0)) //If double has no fraction, it must be the same as its int representation
        {
            return a[i];
        }
    }
    return -1.1;
}

char myfirst(char a[], int n) //Checking for consonants, same asn problem 4.4
{
    for (int i = 0; i < n; i++)
    {
        if (((a[i] < 'A') && (a[i] > 'Z' && a[i] < 'a') && (a[i] > 'z')) ||
            (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' ||
             a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'))
        {
            continue;
        }
        else
        {
            return a[i];
        }
    }

    return '0';
}