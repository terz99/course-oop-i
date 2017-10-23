/*
CH08-320142
a5 p3.cpp
Dushan Terzikj
d.terzikj@jacobs-university.de
*/
#include <iostream>
#include "TournamentMember.h"

int main() {

    // create an instance of Player with the default constructor
    Player p1;
    // set the properties with some values
    p1.setCountry("Germany");
    p1.setCity("Bremen");
    p1.setFoot(true);
    p1.setNumber(1);
    p1.setPosition(2);
    char firstName[] = "Thomas";
    char lastName[] = "Mueller";
    char dateOfBirth[] = "1987-11-25";

    // create an instance of the class with a parametric constructor
    Player p2(2, 3, 3, false, firstName, lastName, dateOfBirth, "Germany", "Munich");
    // create an instance of the class with the copy constructor
    Player p3(p2);

    TournamentMember::changeLocation("Bremen");

    p1.print();
    p2.print();
    p3.print();

    p1.incGoals();
    p2.incGoals();
    p3.incGoals();

    p1.print();
    p2.print();
    p3.print();

    return 0;
}