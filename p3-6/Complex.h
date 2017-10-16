#ifndef _COMPLEX_H
#define _COMPLEX_H

#include <iostream>
using namespace std;

class Complex{

private:

    int real;
    int img;

public:

    // constructor methods
    Complex();
    Complex(const int &real, const int &img);
    // destructor
    ~Complex();

    // getter methods
    int getReal();
    int getImaginary();

    // setter methods
    void setReal(const int &real);
    void setImaginary(const int &img);

    // service methods
    void print();
    Complex getConjugation();
    Complex add(const Complex &c);
    Complex sub(const Complex &c);
    Complex multi(const Complex &c);

};

#endif
