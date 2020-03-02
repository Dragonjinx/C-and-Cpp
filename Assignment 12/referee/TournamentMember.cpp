/*
CH-230-A
a12 p3.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include <cstring>
#include "TournamentMember.h"

typedef const char * cstar; // typedefing const chat * for convienence
typedef const std::string & sump; // typedefing const std::string& for convienence
// Begin Counstructors

TournamentMember::TournamentMember()
{
    strcpy(FirstName, "Default_First_Name");
    strcpy(LastName, "Default_Last_Name");
    strcpy(DOB, "XXXX-XX-XX");
    MemberNum = 0;
    salary = 0;
}

TournamentMember::TournamentMember(cstar newFname, cstar newLname, cstar nDOB, const int nMemberNum, const float nSalary)
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

Player::Player() : TournamentMember()
{
    club = "Default_Club";
    playerNumber = 0;
    playerPosition = "Benched";
    DominantFoot = "Unknown";
    playerGoals = 0;
}

Player::Player( cstar nFname, cstar nLname, cstar nDob, const int nMemNum, const float nSal,\
                sump nClub, const int nPlNum, sump nPlPos, sump nDom, const int nGoals) :\
                TournamentMember(nFname, nLname, nDob, nMemNum, nSal)
                {
                    club = nClub;
                    playerNumber = nPlNum;
                    playerPosition = nPlPos;
                    DominantFoot = nDom;
                    playerGoals = nGoals;
                }

Player::Player(const Player& nPlaya) : TournamentMember(nPlaya)
{
    club = nPlaya.club;
    playerNumber = nPlaya.playerNumber;
    playerPosition = nPlaya.playerPosition;
    DominantFoot = nPlaya.DominantFoot;
    playerGoals = nPlaya.playerGoals;
}

Referee::Referee() : TournamentMember()
{
    yellowCardCount = 0;
    redCardCount = 0;
}

Referee::Referee(   const char *nFname, const char *nLname, const char * nDob, const int nMemNum,\
                    const float nSal, const int nYcard, const int nRcard) :\
                TournamentMember(nFname, nLname, nDob, nMemNum, nSal)
{
    yellowCardCount = nYcard;
    for(int i = 0; i < yellowCardCount; i++)
    {
        yellowCardList[i] = nullptr;
    }
    redCardCount = nRcard;
    for(int i = 0; i < redCardCount; i++)
    {
        redCardList[i] = nullptr;
    }
}

Referee::Referee(const Referee &nRef) : TournamentMember(nRef)
{
    yellowCardCount = nRef.yellowCardCount;
    for(int i = 0; i < yellowCardCount; i++)
    {
        yellowCardList[i] = nRef.yellowCardList[i];
    }
    redCardCount = nRef.redCardCount;
    for(int i = 0; i < redCardCount; i++)
    {
        redCardList[i] = nRef.redCardList[i];
    }
}

// End Constructors

// Begin Destructors

TournamentMember::~TournamentMember()
{
}

Player::~Player()
{
}

Referee::~Referee()
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
              << "Member is located at: " << Location << std::endl
              << std::endl;
}

void Player::SCORE(const int newGoal)
{
    if(newGoal == 1)
    {
        std::cout << getFName() << " just scored a goal!" << std::endl;
    }
    else
    {
        std::cout << getFName() << " just scored " << newGoal << " goals!" << std::endl; 
    }

    playerGoals += newGoal;
}

void Player::print() const
{
    TournamentMember::print();
    std::cout << "Member is a: " << Player::MemberType << std::endl
              << "Member's is affiliated with:" << club << std::endl
              << MemberType << "'s number is: " << playerNumber << std::endl
              << MemberType << "'s position is: " << playerPosition << std::endl
              << MemberType << "'s dominant foot is: " << DominantFoot << std::endl
              << MemberType << " has scored " << playerGoals << " goals." << std::endl
              << std::endl;
}

void Referee::YCardDatBoi(Player sadBoi)
{
    for(int i = 0; i < yellowCardCount; i++)
    {
        if (*yellowCardList[i] == sadBoi)
        {
            std::cout << sadBoi.getFName() << " has already recieved a yellow card. Giving him a red card." << std::endl;
            RCardDatBoi(sadBoi);
            return;
        }
        else
        {
            continue;
        }
    }
    std::cout << "Player " << sadBoi.getFName() << " has been given a yellow card." << std::endl; 
    yellowCardList[yellowCardCount] = &sadBoi;
    yellowCardCount++;
}

void Referee::RCardDatBoi(Player bherysadBoi)
{
    for(int i = 0; i < redCardCount; i++)
    {
        if(*redCardList[i] == bherysadBoi)
        {
            std::cout << "Player " << bherysadBoi.getFName() <<" has already been given a red card" << std::endl;
            return;
        }
        else
        {
            continue;
        }   
    }

    std::cout << "Player " << bherysadBoi.getFName() << " has been given a red card" << std::endl;
    redCardList[redCardCount] = &bherysadBoi;
    redCardCount++;
}

// End Usability Functions


// Overloaded Operator for Tournament Member

bool operator==(const TournamentMember& a, const TournamentMember& b)
{
    if(a.getFName() == b.getFName())
    {
        if(a.getLName() == b.getLName())
        {
            if(a.getMemNum() == b.getMemNum())
            {
                return true;
            }
        }
    }
    return false;
}

// End Overload