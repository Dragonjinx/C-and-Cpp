/*
CH-230-A
a12 p2.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include <cstring>
#include "TournamentMember.h"

// Begin Counstructors

TournamentMember::TournamentMember()
{
    strcpy(FirstName, "Default_First_Name");
    strcpy(LastName, "Default_Last_Name");
    strcpy(DOB, "XXXX-XX-XX");
    MemberNum = 0;
    salary = 0;
}

TournamentMember::TournamentMember(const char *newFname, const char *newLname, const char *nDOB, const int nMemberNum, const float nSalary)
{
    strcpy(FirstName, newFname);
    strcpy(LastName, newLname);
    strcpy(DOB, nDOB);
    MemberNum = nMemberNum;
    salary = nSalary;
}

TournamentMember::TournamentMember(const TournamentMember& nMember)
{
    strcpy(FirstName, nMember.getFName()); // Doing this because the getter function returns a const char*
    strcpy(LastName, nMember.getLName());
    strcpy(DOB, nMember.getDOB());
    MemberNum = nMember.MemberNum;
    salary = nMember.salary;
}

// End Constructors

// Begin Destructors

TournamentMember::~TournamentMember()
{
}

// End Destructors

// Begin Usability Functions

int TournamentMember::getYear() const
{
    int y = 0;
    int m = 0;
    int d = 0;
    sscanf(DOB, "%i-%i-%i", &y, &m, &d);
    return y;
}

int TournamentMember::getMonth() const
{
    int y = 0;
    int m = 0;
    int d = 0;
    sscanf(DOB, "%i-%i-%i", &y, &m, &d);
    return m;
}

int TournamentMember::getDay() const
{
    int y = 0;
    int m = 0;
    int d = 0;
    sscanf(DOB, "%i-%i-%i", &y, &m, &d);
    return d;
}

void TournamentMember::print() const
{
    std::cout << "First Name of member: " << FirstName << std::endl
              << "Last Name of member: " << LastName << std::endl
              << "Born on year: " << getYear() << " month: " << getMonth() << " day: " << getDay() << std::endl
              << "Member Number is: " << MemberNum << std::endl
              << "Salary is: " << salary << std::endl
              << "Member is located at: " << Location << std::endl << std::endl;
}

// End Usability Functions