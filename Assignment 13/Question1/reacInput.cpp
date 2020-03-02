/*
CH-230-A
a13 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include <fstream>
#include <cstdlib>


int main() //int argc, char** argv)
{
    const int bSize = 10; // Size for the buffer
    char buff[bSize]; // Buffer to read from file.
    std::string inputF;
    
    std::cout << "Input file to copy from: " << std::endl;
    std::getline(std::cin, inputF, '.');
    std::string Realinput = inputF + ".txt";
    
    std::ifstream in(Realinput);
    if (!in.good())
    {
        std::cerr << "Error opeaning input file." << std::endl;
        exit(2);
    }
    
    std::string outputF = inputF + "_copy.txt";
    std::cout << "Your output file is: " << outputF << std::endl;
    
    std::ofstream out(outputF, std::ios::out);
    if(!out.good())
    {
        std::cerr << "Error opeaning output file." << std::endl;
        exit(3);
    }

    while(!in.eof())
    {
        in.read(buff, bSize); // Reading n(bSize) characters into the buffer 
        out.write(buff, in.gcount()); // Writing n(bSize) characters from the buffer
        // std::string temp;
        // getline(in, temp);
        // out << temp << std::endl;
    }

    in.close();
    out.close();
    return 0;
}