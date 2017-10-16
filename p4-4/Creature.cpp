#include "Creature.h"
#include <iostream>
using namespace std;

Creature::Creature(): distance(10)
{}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}



Wizard::Wizard() : distFactor(3)
{}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}



Warrior::Warrior() : strengthFactor(3){}

void Warrior::fight(){
	cout << "Fighting with strength " << (strengthFactor*distance) << endl;
}



Druid::Druid() : mana(100){}

void Druid::regenerate(){
	cout << "The druid is regenerating mana at " << mana*distance << endl;
}

Creature::~Creature(){
    cout << "The creature has been deleted\n";
}

Wizard::~Wizard(){
    cout << "The wizard has been deleted\n";
}
Warrior::~Warrior(){
    cout << "The warrior has been deleted\n";
}
Druid::~Druid(){
    cout << "The druid has been deleted\n";
}
