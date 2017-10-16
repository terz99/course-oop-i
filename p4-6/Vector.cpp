#include <iostream>
#include <cmath>
#include "Vector.h"
using namespace std;

// constructors
Vector::Vector(){
    this->size = 0;
    this->comp = NULL;
}

Vector::Vector(const Vector& v){
    this->size = v.size;
    this->comp = new double[this->size];
    for(int i = 0; i < this->size; i++){
        this->comp[i] = v.comp[i];
    }
}

Vector::Vector(const int &size, const double *comp){
    this->size = size;
    this->comp = new double[this->size];
    for(int i = 0; i < this->size; i++){
        this->comp[i] = comp[i];
    }
}

// destructor
Vector::~Vector(){
    delete [] this->comp;
    this->size = 0;
}

// getters
int Vector::getSize() const{
    return this->size;
}

double* Vector::getComponents() const{
    return this->comp;
}

// setters
void Vector::setSize(const int &size){
    this->size = size;
    delete [] this->comp;
    this->comp = new double[this->size];
    cout << "The values of the components have been deleted due to change in vector size\n";
}

void Vector::setComponents(const double *comp, const int &size){
    if(size != this->size){
        cout << "Cannot assign new components to vector due to non-equal sizes\n";
        return;
    }
    for(int i = 0;  i < this->size; i++){
        this->comp[i] = comp[i];
    }
}

// service methods
void Vector::print() const{
    for(int i = 0; i < this->size; i++){
        cout << this->comp[i] << " ";
    }
    cout << endl;
}

double Vector::norm() const{
    double res = 0;
    for(int i = 0; i < this->size; i++){
        res += this->comp[i];
    }
    return sqrt(res);
}

Vector Vector::sub(const Vector &v) const{
    double *ncomp = new double[this->size];
    for(int i = 0; i < this->size; i++){
        ncomp[i] = this->comp[i] - v.comp[i];
    }
    return Vector(this->size, ncomp);
}

Vector Vector::add(const Vector &v) const{
    double *ncomp = new double[this->size];
    for(int i = 0; i < this->size; i++){
        ncomp[i] = this->comp[i] + v.comp[i];
    }
    return Vector(this->size, ncomp);
}

double Vector::scalar(const Vector &v) const{
    double res = 0;
    for(int i = 0; i < this->size; i++){
        res += this->comp[i]*v.comp[i];
    }
    return res;
}
