/*
CH-230-A
a9 p3.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>

void subtract_max(int *&a, int n);
void deallocate(int *&a);

int main(void)
{
    int n;

    std::cout << "Enter the numbers of integer values you want to store: " << std::endl;
    std::cin >> n;

    int *array = new int(n);
    std::cout << "Enter the values for your integer array: " << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }

    std::cout << "Substracting max from all elements." << std::endl;
    subtract_max(array, n);

    std::cout << "Substraction reasult: " << std::endl
              << '{';
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << ' ';
    }
    std::cout << "}" << std::endl;

    std::cout << "Deallocating memory." << std::endl;
}

void subtract_max(int *&a, int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        a[i] -= max;
    }
}

void deallocate(int *&a)
{
    delete a;
}