/*
CH08-320142
a5 p2.cpp
Dushan Terzikj
d.terzikj@jacobs-university.de
*/
#include <iostream>
#include "TournamentMember.h"

int main() {

    char firstName[] = "Dushan";
    char lastName[] = "Terzikj";
    char dateOfBirth[] = "1999-01-10";
    std::string country = "Germany";
    std::string city = "Munich";

    TournamentMember tm;
    tm.setFirstName(firstName);
    tm.setLastName(lastName);
    tm.setDateOfBirth(dateOfBirth);

    tm.print();

    TournamentMember tm1(firstName, lastName, dateOfBirth, country, city);
    tm1.print();

    TournamentMember tm2(tm1);
    tm2.print();

    TournamentMember::changeLocation("Berlin");

    tm.print();
    tm1.print();
    tm2.print();
    return 0;
}