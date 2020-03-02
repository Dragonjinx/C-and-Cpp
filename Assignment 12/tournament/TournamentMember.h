/*
CH-230-A
a12 p2.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <cstring>
#include <string>
/*  A member of a football tournament
    Constructor Call:
    (Club, Role, FirstName, LastName, DOB, Speed)
*/
class TournamentMember
{
private:
    static std::string Location; // Location of the tournament
    char FirstName[36];
    char LastName[36];
    char DOB[11];
    int MemberNum;
    float salary;

public:
    // Deafult constructor for TournamentMember
    TournamentMember();
    /*  Parametric constructor for Tournament Member
        Constructor Call:
        (Club, Role, FirstName, LastName, DOB, Speed)
    */
    TournamentMember(const char*, const char*, const char*, const int, const float);
    // Copy Constructor for TournamentMember
    TournamentMember(const TournamentMember &);
    // Empty destructor for TournamentMember
    ~TournamentMember();

    // Static method to change the location of the tournament
    static void changeLocation(std::string &newLocation);

    /*  Setter Functions: */
    // Sets the First name of the tournament member
    void setFName(const char *newFName);
    // Sets the last name of the tournament member
    void setLName(const char *newLName);
    // Sets the date of birth for the tournament member
    void setDOB(const char *newDOB);
    // Sets the age of the tournament member
    void setAge(const int newMemberNum);
    // Sets the salary of the tournament member
    void setSalary(const float newSalary);

    /*  Getter Functions */
    // Gets the location of the tournament
    static std::string getLocation();
    // Gets the club of the tournament member
    const char *getFName() const;
    // Gets the Lasr name (Character Array) of the tournament member
    const char *getLName() const;
    // Gets the DAte of birth (Character Array) of the tournament member
    const char *getDOB() const;
    // Gets the age of the tournament member
    int getage() const;
    // Gets the salary of the tournament member
    float getSalary() const;

    /* Functions for the DOB */
    // (YYYY-MM-DD) Returns YYYY
    int getYear() const;
    // (YYYY-MM-DD) Returns MM
    int getMonth() const;
    // (YYYY-MM-DD) Returns DD
    int getDay() const;
    // Prints the information on the screen
    void print() const;
};

// Begin inline setter functions

inline void TournamentMember::changeLocation(std::string &newlocation)
{
    Location = newlocation;
}

inline void TournamentMember::setFName(const char *newFName)
{
    strcpy(FirstName, newFName);
}

inline void TournamentMember::setLName(const char *newLName)
{
    strcpy(LastName, newLName);
}

inline void TournamentMember::setDOB(const char *newDob)
{
    strcpy(DOB, newDob);
}

inline void TournamentMember::setAge(const int newMemberNum)
{
    MemberNum = newMemberNum;
}

inline void TournamentMember::setSalary(const float newSalary)
{
    salary = newSalary;
}

// End inline setter functions

// Begin inline getter functions

inline std::string TournamentMember::getLocation()
{
    return Location;
}

inline const char *TournamentMember::getFName() const
{
    return FirstName;
}

inline const char *TournamentMember::getLName() const
{
    return LastName;
}

inline const char *TournamentMember::getDOB() const
{
    return DOB;
}

inline int TournamentMember::getage() const
{
    return MemberNum;
}

inline float TournamentMember::getSalary() const
{
    return salary;
}

// End inline getter functions