/*
CH08-320142
a5 p1.cpp
Dushan Terzikj
d.terzikj@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

int main(){

    Hexagon red(2.0, "red");
    Hexagon yellow(10.0, "yellow");
    Hexagon copy(yellow);

    std::cout << "First hexagon\nPerimeter: " << red.perimeter() << "\nArea: "
              << red.area() << std::endl;
    std::cout << "Second hexagon\nPerimeter: " << yellow.perimeter() << "\nArea: "
              << yellow.area() << std::endl;
    std::cout << "Third hexagon\nPerimeter: " << copy.perimeter() << "\nArea: "
              << copy.area() << std::endl;

    return 0;
}
