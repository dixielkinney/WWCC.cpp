// Coding Assignment 1: Print Formatter

#include <iostream>
#include <iomanip> //for setw
#include <string> //for string
#include <cctype> // for toupper()
#include <algorithm>
using namespace std;

string longNumber = "1234567";
string decimalNumber = "45.6789";
string helloWorld = "hello world of c++ programming";

string addCommasToNumber (string longNumber){
    string formattedNumber = longNumber;
    int n = longNumber.length() - 3;
    while (n > 0){
        formattedNumber.insert(n, 1, ',');
        n -= 3;
    }
    return formattedNumber;
}

string dec2_decimalNumber (string decimalNumber){
    double num = stod(decimalNumber);
        stringstream ss;
        ss << fixed << setprecision(2) << num;
    
    return ss.str();
}

string dec3_decimalNumber(){
    double num = stod(decimalNumber);
        stringstream ss;
        ss << fixed << setprecision(3) << num;
    
    return ss.str();
}

string capitalize_helloWorld (){
    size_t stringLength = helloWorld.length();
    for (size_t i = 0; i < stringLength; i++){
        char currentChar = helloWorld[i];
        if (i == 0){
            helloWorld[i] = toupper( currentChar);
        }
        if (currentChar == ' '){
            char nextChar = helloWorld[i+1];
            helloWorld[i+1] = toupper( nextChar );
        }
    }
    return helloWorld;
}

int main()
{
    cout << "Integer Formatting:" << endl;
    cout << "Original: ";
    cout << fixed << longNumber << endl;
    cout << "Formatted: ";
    cout << addCommasToNumber(longNumber) << endl << endl;

    cout << "Double Formatting (Default 2 Decimal Places):" << endl;
    cout << "Original: ";
    cout << decimalNumber << endl;
    cout << "Formatted: ";
    cout << dec2_decimalNumber(decimalNumber) << endl << endl;

    cout << "Double Formatting (Custom Decimal Places):" << endl;
    cout << "Original: " << decimalNumber << " with precision 3" << endl;
    cout << "Formatted: ";
    cout << dec3_decimalNumber() << endl << endl;
    
    cout << "String Formatting:" << endl;
    cout << "Original: ";
    cout << helloWorld << endl;
    cout << "Formatted: ";
    cout << capitalize_helloWorld() << endl;
    
    return 0;
}