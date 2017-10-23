//
// Created by dushan on 23.10.17.
//

#ifndef P6_3_SQUARE_H
#define P6_3_SQUARE_H


#include "Rectangle.h"

class Square : public Rectangle{

private:

    double side;

public:
    Square(const char *n, double side);
    ~Square();
    double calcArea() const;
    double perimeter() const;

};


#endif //P6_3_SQUARE_H
