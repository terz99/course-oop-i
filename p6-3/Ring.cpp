#include <iostream>
#include "Ring.h"

Ring::Ring(const char *n, double outer, double inner)
        : Area(n), Circle(n, outer) {
    innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
    std::cout << "calcArea of a Ring...\n";
    return (Circle::calcArea()-
            (innerradius * innerradius * 3.141593));
}

double Ring::perimeter() const {
    std::cout << "perimeter of Ring...\n";
    return Circle::calcArea() + 2*innerradius*3.141593;
}