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

int main()
{
    Player A;
    Player B("Ricardo", "Milos", "1969-12-12", 69, 42069, "Old Spice", 69, "Striker", "Both", 69);
    Player C("Jhon", "Cena", "1942-04-20", 420, 69420);
    Player D(B);

    A.print();
    B.print();
    C.print();
    D.print();

    B.SCORE();
    C.SCORE(420);

    B.print();
    C.print();

    return 0;
}