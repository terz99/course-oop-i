/*
CH08-320142
a4_p3.cpp
Dushan Terzikj
d.terzikj@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Warrior\n";
    Warrior war;
    war.fight();

    cout << "\nCreating a Druid\n";
    Druid d;
    d.regenerate();

    return 0;
} 