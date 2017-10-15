#ifndef CITY_H
#define CITY_H

#include <string>
using namespace std;

class City{
	
private:
	
	// name of the city
	string name; 
	// location (country) of the city
	string location;
	// Point Of Interest (POI) in the city
	string poi;
	// population of the city (number of citizens)
	int population;
	
public:

	// getters start here
	
	string getName();
	string getLocation();
	string getPointOfInterest();
	int getPopulation();
	
	// getters end here
	
	// setters start here
	
	void setName(const string &name);
	void setLocation(const string &location);
	void setPointOfInterest(const string &poi);
	void setPopulation(const int &population);
	
	// setters end here
	
	// helper functions start here
	
	void print();
	
	// helper functions end here
};

#endif