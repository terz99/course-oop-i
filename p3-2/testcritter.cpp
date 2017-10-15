#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv){

    Critter one;

    one.setHunger(5);
    one.setHeight(12.0);
    one.setBoredom(1);

    Critter two("Critter-Two");

    two.setHunger(5);
    two.setHeight(14.0);
    two.setBoredom(3);

    Critter three("Critter-Three", 5, 0, 11.0);
    Critter four("Critter-Four", 5, 2, 13.0);

    return 0;
}
