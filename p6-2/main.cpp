/*
CH08-320142
a6 p2.cpp
Dushan Terzikj
d.terzikj@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
    Fraction a, b;
    cin >> a >> b;
    if(a > b){
        cout << a << endl;
    } else {
        cout << b << endl;
    }

    Fraction sum = a + b;
    Fraction diff = a - b;
    cout << sum << endl;
    cout << diff << endl;
}