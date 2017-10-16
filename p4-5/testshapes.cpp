/*
CH08-320142
a4_p5.cpp
Dushan Terzikj
d.terzikj@jacobs-university.de
*/
#include "Shapes.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    Circle circle("Cricle", 3, 4, 5);
    Rectangle rect("Rectangle", 5, 6, 10, 5);
    Square sqr("Square", 1, 2, 5);

    circle.printName();
    cout << "Area: " << circle.area() << " Perimeter: " << circle.perimeter() << endl;

    rect.printName();
    cout << "Area: " << rect.area() << " Perimeter: " << rect.perimeter() << endl;

    sqr.printName();
    cout << "Area: " << sqr.area() << " Perimeter: " << sqr.perimeter() << endl;

    return 0;
}
