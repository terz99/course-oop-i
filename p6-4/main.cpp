/*
CH08-320142
a6 p4.cpp
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








const char* colors[] = {"RED", "GREEN", "YELLOW", "BLUE"};
const int num_obj = 20;
int main() {

    double sum_area = 0;
    double sum_perimeter = 0;
    srand(static_cast<unsigned int>(time(NULL)));
    Area *list[num_obj];
    for(int i = 0; i < num_obj; i++){

        int color_idx = rand()%4;
        int type = rand()%4;

        if(type == 0){

            cout << "Creating a Circle\n";
            int radius = rand()%50 + 1;
            list[i] = new Circle(colors[color_idx], (double)radius);
        } else if(type == 1){

            cout << "Creating a Rectangle\n";
            int len = rand()%50 + 1;
            int wid = rand()%50 + 1;
            list[i] = new Rectangle(colors[color_idx], (double)len, (double)wid);
        } else if(type == 2){

            cout << "Creating a Ring\n";
            int outerRadius = rand()%50 + 1;
            int innerRadius = rand()%outerRadius + 1;
            list[i] = new Ring(colors[color_idx], (double)outerRadius, (double)innerRadius);
        } else {

            cout << "Creating a Square\n";
            int side = rand()%50 + 1;
            list[i] = new Square(colors[color_idx], side);
        }
    }

    for(int i = 0; i < num_obj; i++){
        sum_perimeter += list[i]->perimeter();
        sum_area += list[i]->calcArea();
    }

    cout << "The total area is " << sum_area << endl;
    cout << "The total perimeter is " << sum_perimeter << endl;

    return 0;
}