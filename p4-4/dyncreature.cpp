/*
CH08-320142
a4_p4.cpp
Dushan Terzikj
d.terzikj@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{
    while(true){

        cout << "Enter which object you want to create:\n";
        char op;
        cin >> op;
        if(op == 'w'){
            Wizard *w = new Wizard;
            w->hover();
            delete w;
        } else if(op == '1'){
            Warrior *w = new Warrior;
            w->fight();
            delete w;
        } else if(op == '2'){
            Druid *d = new Druid;
            d->regenerate();
            delete d;
        } else if(op == 'q'){
            break;
        }
    }

    return 0;
}
