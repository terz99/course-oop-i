/*
CH08-320142
a4_p2.cpp
Dushan Terzikj
d.terzikj@jacobs-university.de
*/
#include <iostream>

using namespace std;

class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

class Warrior : public Creature{

public:
	Warrior();
	void fight();

private:
	int strengthFactor;
};

Warrior::Warrior() : strengthFactor(3){}

void Warrior::fight(){
	cout << "Fighting with strength " << (strengthFactor*distance) << endl;
}

class Druid : public Creature {

public:
	Druid();
	void regenerate();
private:
	int mana;
};

Druid::Druid() : mana(100){}

void Druid::regenerate(){
	cout << "The druid is regenerating mana at " << mana*distance << endl;
}

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