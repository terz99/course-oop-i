/*
CH08-320142
a6 p1.cpp
Dushan Terzikj
d.terzikj@jacobs-university.de
*/
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

typedef unsigned int ui;

// hardcoded array with the available colors
const string COLORS[] = {"RED", "GREEN", "BLUE", "YELLOW"};
// max number of available colors
const int MAX = 4;

// this function gets index as a parameter and returns the color on the
// corresponding index
string getColor(const int& idx){
    return COLORS[idx];
}

// this function returns a random number from 0 to n-1
int getRandom(const int& n){
    return rand()%n;
}

int main(){

    srand(static_cast<ui>(time(NULL)));

    int cnt = 10;
    while(cnt--){

        int idx = getRandom(MAX);
        string color = getColor(idx);
        cout << color << endl;
    }

    return 0;
}
