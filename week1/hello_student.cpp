//Coding Assignment 1: Hello Student!

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string dog;
    
    cout << "Please enter your name:" << endl;
    cin >> name;

    cout << "Hi, " << name << "! Welcome to C++!" << endl;
    
    cout << "What is your favorite dog breed?" << endl;
    cin >> dog;

    cout << "The " << dog << " is such a pretty breed!";

    return 0;
}