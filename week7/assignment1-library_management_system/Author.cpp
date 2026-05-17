// Author.cpp

#include "Author.h"
#include <iostream>
using namespace std;

Author::Author(string n, int b) {
    name = n;
    birthYear = b;
}

string Author::getName() const {
    return name;
}

int Author::getBirthYear() const {
    return birthYear;
}

void Author::display() const {
    cout << "Author: " << name << " (" << birthYear << ")" << endl;
}