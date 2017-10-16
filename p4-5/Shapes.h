/*
Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
using namespace std;

class Shape {			// base class
private:   				// private access modifier: could also be protected
	string name;   // every shape will have a name
public:
	Shape(const string&);  // builds a shape with a name
	Shape();					// empty shape
	Shape(const Shape&);		// copy constructor
	void printName() const ;  	// prints the name

	// getters methods
	string getName();
	// setter methods
	void setName(const string &s);
};

class CenteredShape : public Shape {  // inherits from Shape
private:
	double x,y;  // the center of the shape
public:
	CenteredShape(const string&, double, double);  // usual three constructors
	CenteredShape();
	CenteredShape(const CenteredShape&);
	void move(double, double);	// moves the shape, i.e. it modifies it center

	// getters
	double getX();
	double getY();
	// setters
	void setX(const double &x);
	void setY(const double &y);
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
private:
	int EdgesNumber;
public:
	RegularPolygon(const string&, double, double, int);
	RegularPolygon();
	RegularPolygon(const RegularPolygon&);
	// getters
	int getEdgesNumber();
	// setters
	void setEdgesNumber(const int &EdgesNumber);
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
private:
	double Radius;
public:
	Circle(const string&, double, double, double);
	Circle();
	Circle(const Circle&);
	// getters
	double getRadius();
	// setters
	void setRadius(const double &Radius);

	// service methods
	double perimeter();
	double area();
};

class Rectangle : public RegularPolygon{

private:

	double width;
	double height;

public:

	Rectangle();
	Rectangle(const string &n, double nx, double ny, double nwidth,
	double nheight);

	// getters
	double getWidth();
	double getHeight();
	// setters
	void setWidth(const double &width);
	void setHeight(const double &height);

	// service methods
	double perimeter();
	double area();

};

class Square : public Rectangle{

public:

	Square();
	Square(const string &n, double nx, double ny, double nside);
};

#endif
