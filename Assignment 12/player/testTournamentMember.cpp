/*
CH-230-A
a12 p2.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <iostream>
#include "TournamentMember.h"

std::string TournamentMember::Location = "Bremen";

int main()
{
    TournamentMember A;
    TournamentMember B("Ricardo", "Milos", "1998-12-25", 69, 42069);
    TournamentMember C(B);
    
    A.print();
    B.print();
    C.print();

    return 0;
}