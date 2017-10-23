/*
CH08-320142
a6 p3.cpp
Dushan Terzikj
d.terzikj@jacobs-university.de
*/
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"






//                          Diagram of class relations

//                                   Area
//                                  /    \
//                            Circle      Rectangle
//                           /                     \
//                       Ring                       Square









const int num_obj = 7;
int main() {
    Area *list[num_obj];						// (1) A list of Area object POINTERS is declared
    int index = 0;								// (2) This is the index of the list 'list' which will be used for traversing
    double sum_area = 0.0;						// (3) A double which will store
    cout << "Creating Ring: ";                  //  the total area of all the Area objects
    Ring blue_ring("BLUE", 5, 2);				// (4) Here is where the declaration and initialization of Ring, Circle, and Rectangle start
    cout << "Creating Circle: ";
    Circle yellow_circle("YELLOW", 7);
    cout << "Creating Rectangle: ";
    Rectangle green_rectangle("GREEN",5,6);
    cout << "Creating Circle: ";
    Circle red_circle("RED", 8);
    cout << "Creating Rectangle: ";
    Rectangle black_rectangle("BLACK", 10, 20);
    cout << "Creating Ring: ";
    Ring violet_ring("VIOLET", 100, 5);
    cout << "Creating a Square: ";
    Square blue_square("BLUE", 50);
    list[0] = &blue_ring;						// (5) All the previous instances
    list[1] = &yellow_circle;                   // of Ring, Circle and Rectangle
    list[2] = &green_rectangle;                 // are inserted in the list of Area pointers
    list[3] = &red_circle;                      // This is possible because the
    list[4] = &black_rectangle;                 // objects are derived from the class Area
    list[5] = &violet_ring;                     // This aspect of programming is called polymorphism
    list[6] = &blue_square;
    while (index < num_obj) {					// (7) Go through all objects in the list using 'index'
        (list[index])->getColor();				// (8) First print the color and then add the area to the 'sum_area'
        sum_area += (list[index++])->calcArea();
    }
    cout << "\nThe total area is "
         << sum_area << " units " << endl;	// (9) The total area is printed in the console

    index = 0;
    double sum_perimeter = 0;
    while(index < num_obj){
        sum_perimeter += (list[index++])->perimeter();
    }

    cout << "\nThe total perimeter is "
         << sum_perimeter << " units " << endl;

    return 0;
}
