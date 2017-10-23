#include <iostream>
#include "Circle.h"

Circle::Circle(const char *n, double a) : Area(n) {
    radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
    std::cout << "calcArea of Circle...\n";
    return radius * radius * 3.141593;
}

double Circle::perimeter() const {
    std::cout << "perimeter of Circle...\n";
    return 2*radius*3.141593;
}
