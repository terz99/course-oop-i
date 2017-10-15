#include <iostream>
#include "Box.h"

using namespace std;

// default empty constructors
Box::Box(){
    cout << "Object created with the empty constructor\n";
}

// constructor which accepts length, width and height as params
Box::Box(const double &l, const double &w, const double &h){
    this->l = l;
    this->w = w;
    this->h = h;
    cout << "Object created with constructor 1.\n";
    cout << "l = " << this->l << " w = " << this->w << " h = " << this->h;
    cout << "\n";
}

// returns the length of the box
double Box::getLength(){
    return l;
}

// returns the width of the box
double Box::getWidth(){
    return w;
}

// returns the height of the box
double Box::getHeight(){
    return h;
}

// sets a new length of the box
void Box::setLength(const double &l){
    this->l = l;
    cout << "New length set: l = " << this->l << "\n";
}

// sets a new width of the box
void Box::setWidth(const double &w){
    this->w = w;
    cout << "New width set: w = " << this->w << "\n";
}

// sets a new height of the box
void Box::setHeight(const double &h){
    this->h = h;
    cout << "New height set: h = " << this->h << "\n";
}

// calculates and returns the volume of the boxes
double Box::getVolume(){
    return l*w*h;
}

// default destructor override
Box::~Box(){
    cout << "The item has been deleted\n";
}
