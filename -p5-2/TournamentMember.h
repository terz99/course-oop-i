//
// Created by dushan on 23.10.17.
//

#ifndef P5_2_TOURNAMENTMEMBER_H
#define P5_2_TOURNAMENTMEMBER_H


class TournamentMember {

private:

    static std::string location;

    char *firstName;
    char *lastName;
    char *dateOfBirth;
    std::string country;
    std::string city;

public:

    // constructors
    TournamentMember();
    TournamentMember(char*, char*, char*, const std::string&, const std::string&);
    TournamentMember(const TournamentMember&);

    // destructors
    ~TournamentMember();

    // setters
    inline void setFirstName(char *firstName){

        char *ch = firstName;
        for(int i = 0; *ch != '\0'; i++, ch++){
            this->firstName[i] = *ch;
        }
    }

    inline void setLastName(char *lastName){

        char *ch = lastName;
        for(int i = 0; *ch != '\0'; i++, ch++){
            this->lastName[i] = *ch;
        }
    }

    inline void setDateOfBirth(char *dateOfBirth){

        char *ch = dateOfBirth;
        for(int i = 0; *ch != '\0'; i++, ch++){
            this->dateOfBirth[i] = *ch;
        }
    }

    inline void setCountry(const std::string &country){
        this->country = country;
    }

    inline void setCity(const std::string &city){
        this->city = city;
    }

    // getters
    inline char* getFirstName() const{
        return firstName;
    }

    inline char* getLastName() const{
        return lastName;
    }

    inline char* getDateOfBirth() const{
        return dateOfBirth;
    }

    inline std::string getCountry() const{
        return this->country;
    }

    inline std::string getCity() const{
        return this->city;
    }

    // service methods
    void print() const;

    static void changeLocation(const std::string&);

};


#endif //P5_2_TOURNAMENTMEMBER_H
