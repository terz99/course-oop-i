/*
CH08-320142
a3_p6.cpp
Dushan Terzikj
d.terzikj@jacobs-university.de
*/
#include <iostream>
#include "Complex.h"
using namespace std;

int main(){

    int real, img;
    cin >> real >> img;
    Complex a(real, img);
    Complex b;
    cin >> real >> img;
    b.setReal(real);
    b.setImaginary(img);

    // step a
    Complex conjugate_a = a.getConjugation();
    conjugate_a.print();

    // steb b
    Complex sum = a.add(b);
    sum.print();

    // step c
    Complex diff = a.sub(b);
    diff.print();

    // step d
    Complex prod = a.multi(b);
    a.print();

    return 0;
}
