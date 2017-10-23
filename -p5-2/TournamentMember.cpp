//
// Created by dushan on 23.10.17.
//

#include <iostream>
#include "TournamentMember.h"

// constructors

TournamentMember::TournamentMember() {
    std::cout << "Default constructor called\n";
    this->dateOfBirth = new char[11];
    this->firstName = new char[31];
    this->lastName = new char[31];
}

TournamentMember::TournamentMember(char *firstName, char *lastName,
                                   char *dateOfBirth, const std::string &country,
                                   const std::string &city) {

    std::cout << "Parametric constructor called\n";
    this->dateOfBirth = new char[11];
    this->firstName = new char[31];
    this->lastName = new char[31];

    char *ch = firstName;
    for(int i = 0; *ch != '\0'; i++, ch++){
        this->firstName[i] = *ch;
    }

    ch = lastName;
    for(int i = 0; *ch != '\0'; i++, ch++){
        this->lastName[i] = *ch;
    }

    ch = dateOfBirth;
    for(int i = 0; *ch != '\0'; i++, ch++){
        this->dateOfBirth[i] = *ch;
    }

    this->country = country;
    this->city = city;
}

TournamentMember::TournamentMember(const TournamentMember &tm) {

    std::cout << "Copy constructor called\n";
    this->dateOfBirth = new char[11];
    this->firstName = new char[31];
    this->lastName = new char[31];

    char *ch = tm.firstName;
    for(int i = 0; *ch != '\0'; i++, ch++){
        this->firstName[i] = *ch;
    }

    ch = tm.lastName;
    for(int i = 0; *ch != '\0'; i++, ch++){
        this->lastName[i] = *ch;
    }

    ch = tm.dateOfBirth;
    for(int i = 0; *ch != '\0'; i++, ch++){
        this->dateOfBirth[i] = *ch;
    }

    this->country = tm.country;
    this->city = tm.city;
}

// destructor

TournamentMember::~TournamentMember() {
    std::cout << "Destructor is called\n";
    delete [] this->dateOfBirth;
    delete [] this->firstName;
    delete [] this->lastName;
}

// service methods

void TournamentMember::print() const{

    std::cout << "First Name: ";
    char *ch = this->firstName;
    for(; *ch != '\0'; ch++){
        std::cout << *ch;
    }
    std::cout << std::endl;

    std::cout << "Last Name: ";
    ch = this->lastName;
    for(; *ch != '\0'; ch++){
        std::cout << *ch;
    }
    std::cout << std::endl;

    std::cout << "Date of Birth: ";
    ch = this->dateOfBirth;
    for(; *ch != '\0'; ch++){
        std::cout << *ch;
    }

    std::cout << std::endl;

    std::cout << "The member is from " << this->country << ", " << this->city;

    std::cout << std::endl;

    std::cout << "The location of the tournament is in: " << location;

    std::cout << std::endl;

}

// static initializations
std::string TournamentMember::location = "Bremen";

void TournamentMember::changeLocation(const std::string &newLocation) {
    location = newLocation;
}

