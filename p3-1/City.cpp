#include <iostream>
#include "City.h"
using namespace std;

// returns the location (country) where the city belongs to
string City::getLocation(){
	return location;
}

// returns the name of the city
string City::getName(){
	return name;
}

// returns the point of interest (poi) in the city
string City::getPointOfInterest(){
	return poi;
}

// returns the population (number of citizens) of the city
int City::getPopulation(){
	return population;
}


// sets a new name of the city
void City::setName(const string &name){
	this->name = name;
}

// sets a new location (country) of the city
void City::setLocation(const string &location){
	this->location = location;
}

// sets a new point of interest (poi) in the city
void City::setPointOfInterest(const string &poi){
	this->poi = poi;
}

// sets a new population amount (number of citizens) of the city
void City::setPopulation(const int &population){
	this->population = population;
}

// prints data from the object
void City::print(){
	cout << "Name of the city: " << name << endl;
	cout << "Location of the city: " << location << endl;
	cout << "Point of interest of the city: " << poi << endl;
	cout << "Population of the city: " << population << endl;
}