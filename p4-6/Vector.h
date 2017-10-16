#ifndef _VECTOR_H
#define _VECTOR_H
using namespace std;

class Vector{

private:

    int size;
    double *comp;

public:

    // constructors
    Vector();
    Vector(const Vector&);
    Vector(const int&, const double*);

    // destructor
    ~Vector();

    // getters
    int getSize() const;
    double* getComponents() const;

    // setters
    void setSize(const int&);
    void setComponents(const double*, const int&);

    // service methods
    void print() const;
    double norm() const;
    Vector sub(const Vector&) const;
    Vector add(const Vector&) const;
    double scalar(const Vector&) const;

};

#endif
