/*
CH-230-A
a10 p4.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <string>

class Person
{
    private:
    std::string name; //Name of the person
    int age; //Age of the person
    float weight; //Weight og the person
    double salary; //Yes people earn salary in doubles. Nobody said this had to be realistic :)


    public:
    //Functions to set the values
    void setName(std::string &newName);
    void setAge(int newAge);
    void setWeight(float newWeight);
    void setSalary(double newSalary);
    //Function to get the values
    std::string getName();
    int getAge();
    float getWeight();
    double getSalary();
    //Prints all the properties
    void print();
};