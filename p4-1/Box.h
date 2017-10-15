#ifndef _BOX_H
#define _BOX_H

#include <iostream>

class Box{

private:

    // length of the box
    double l;
    // width of the box
    double w;
    // height of the box
    double h;

public:

    // constructors start here
    Box();
    Box(const double &l, const double &w, const double &h);
    // constructors end here

    // getters start here
    double getLength();
    double getWidth();
    double getHeight();
    // getters end here

    // setters start here
    void setLength(const double &l);
    void setWidth(const double &w);
    void setHeight(const double &h);
    // setters end here

    // destructor
    ~Box();

    // calculates the volume of the box
    double getVolume();
};

#endif
