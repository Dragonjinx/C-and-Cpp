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
    int age;          //Age of the person
    float weight;     //Weight of the person
    double salary;    //Yes people earn salary in doubles. Nobody said this had to be realistic :)

public:
    /* Constructors */
    // Empty constructor
    Person();
    // Parametric Constructor (Name, Age, Weight, Salary)
    Person(const std::string &, const int, const float, const double);
    //Copy constructor
    Person(const Person &);

    /* Destructor */
    // Empty Destructor
    ~Person();

    /* Setter Functions: */
    // Sets Name
    void setName(const std::string &newName);
    //Sets Age
    void setAge(const int newAge);
    //Sets Weight
    void setWeight(const float newWeight);
    // Sets Salary
    void setSalary(const double newSalary);

    /* Getter Functions: */
    // Returns name
    std::string getName() const;
    // Returns Age
    int getAge() const;
    // Returns Weight
    float getWeight() const;
    // Returns Salary
    double getSalary() const;

    //Prints all the properties of a person
    void print() const;
};