/*
CH-230-A
a13 p2.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
    int n;         // Number of user specefied files
    char buff[10]; // Buffer for the file

    std::cout << "Input the number of files: " << std::endl;
    std::cin >> n;
    std::cin.ignore();
    int i = 0;
    std::string Arr[n];

    while (i < n)
    {
        std::cout << "Enter the name of file " << i + 1 << ": " << std::endl;
        getline(std::cin, Arr[i]);
        i++;
    }

    std::ofstream out("concatn.txt", std::ios::out);
    i = 0;

    while (i < n)
    {
        std::ifstream in(Arr[i]);
        if (!in.good())
        {
            std::cout << "Error Opeaning file." << std::endl;
            exit(i + 1);
        }
        out << "-------------------------------File " << i + 1 << "-------------------------------" << std::endl;
        while (!in.eof())
        {
            in.read(buff, 10);
            out.write(buff, in.gcount());
        }
        out << std::endl;
        in.close();
        i++;
    }
    out.close();
    return 0;
}