#include <string> // defines standard C++ string class
using namespace std;
/* First C++ class */
class Critter
{
private:  // data members are private
    string name;
    int hunger;
    int boredom;
    double height;

public: // business logic methods are public

    // constructor methods
    Critter();
    Critter(const string &name);
    Critter(const string &name, const int &hunger, const int &boredom,
    const double &height);

    // setter methods
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(double height);
    // getter method
    int getHunger();
    // service method
    void print();
};
