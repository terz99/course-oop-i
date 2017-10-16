#include "Complex.h"
#include <iostream>
#include <cmath>
using namespace std;

// constructor methods

Complex::Complex(){
    cout << "Empty constructor has been called\n";
    this->real = this->img = 0;
}

Complex::Complex(const int &real, const int &img){
    cout << "Constructor one has been called\n";
    this->real = real;
    this->img = img;
}

Complex::~Complex(){
    cout << "The object has been deleted\n";
}

// getter methods

int Complex::getReal(){
    return this->real;
}

int Complex::getImaginary(){
    return this->img;
}

// setter methods

void Complex::setReal(const int &real){
    this->real = real;
}

void Complex::setImaginary(const int &img){
    this->img = img;
}

// service methods
void Complex::print(){
    string pre, mid;
    pre = "";
    mid = "+";
    if(this->real < 0){
        pre = "-";
    }
    if(this->img < 0){
        mid = "-";
    }
    cout << pre << abs(this->real) << " " << mid << " " << abs(this->img)
    << "i" << endl;
}

Complex Complex::getConjugation(){
    return Complex(this->real, -this->img);
}

Complex Complex::add(const Complex &c){
    return Complex(this->real + c.real, this->img + c.img);
}

Complex Complex::sub(const Complex &c){
    return Complex(this->real - c.real, this->img - c.img);
}

Complex Complex::multi(const Complex &c){
    return Complex(this->real*c.real - this->img*c.img, this->real*c.img +
    c.real*this->img);
}
