/*
CH08-320142
a3_p4.cpp
Dushan Terzikj
d.terzikj@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv){

    Critter one;

    one.setHunger(5);
    one.setHeight(12.0);
    one.setBoredom(1);
    one.print();

    Critter two("Critter-Two");

    two.setHunger(5);
    two.setHeight(14.0);
    two.setBoredom(3);
    two.print();

    Critter three("Critter-Three", 5, 0, 11.0);
    three.print();
    Critter four("Critter-Four", 5, 2, 13.0);
    four.print();
    Critter five("Critter-Five", 5, 4, 14.0, 60);
    five.print();

    return 0;
}
