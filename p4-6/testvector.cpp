/*
CH08-320142
a4_p6.cpp
Dushan Terzikj
d.terzikj@jacobs-university.de
*/
#include <iostream>
#include "Vector.h"
using namespace std;

int main(){

    Vector one;
    one.setSize(5);
    double comp[] = {1, 2, 3, 4, 5};
    one.setComponents(comp, 5);

    Vector two(one);

    Vector three(5, comp);


    cout << one.norm() << endl;
    (one.add(three)).print();
    (one.sub(three)).print();
    cout << one.scalar(three) << endl;

    return 0;
}
