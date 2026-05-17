// Author.h

#ifndef AUTHOR_H
#define AUTHOR_H
#include <string>
using namespace std;

class Author {
private:
    string name;
    int birthYear;
    
public:
    Author(string n = "", int b = 0);
    string getName() const;
    int getBirthYear() const;

    void display() const;
};

#endif 