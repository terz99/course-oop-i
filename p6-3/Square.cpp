//
// Created by dushan on 23.10.17.
//

#include <iostream>
#include "Square.h"

Square::Square(const char *n, double side) : Area(n), Rectangle(n, side, side){
    this->side = side;
}

Square::~Square() {

}

double Square::calcArea() const {
    std::cout << "calcArea in Square...\n";
    return Rectangle::calcArea();
}

double Square::perimeter() const {
    std::cout << "perimeter in Square...\n";
    return Rectangle::perimeter();
}
