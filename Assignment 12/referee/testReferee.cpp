/*
CH-230-A
a12 p3.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include "TournamentMember.h"

std::string TournamentMember::Location = "Bremen";
std::string Player::MemberType = "Player";
std::string Referee::MemberType = "Referee";

int main()
{
    Player A("Ricardo", "Milos", "1969-10-20", 69, 42069);
    Player B("Jhon", "Cena", "1942-10-20", 76, 420);
    Player C("Big", "Shaq", "1997-10-20", 48, 587, "Mans not Hot");
    Referee D("Strict", "Boi", "1986-04-20", 100, 100);

    /* Debugging overloaded operator
    if(B == A)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    */

    D.YCardDatBoi(B);
    D.YCardDatBoi(A);
    D.YCardDatBoi(A);
    D.RCardDatBoi(A);
    D.RCardDatBoi(B);
    return 0;
}