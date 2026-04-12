//Coding Assignment 3: Temperature Converter

#include <iostream>
using namespace std;

int main() {

    double temperature;
    char unit;
    double ctemperature;
    double ftemperature;

    cout << "Please enter a temperature value: " << endl;
    cin >> temperature;

    cout << "Is this temperature value in Celsius or Fahrenheit? Enter C or F. " << endl;
    cin >> unit;

    if (unit == 'C') {
        ctemperature = temperature;
        ftemperature = (temperature * 9/5) + 32;
    } else if (unit == 'F') {
        ftemperature = temperature;
        ctemperature = (temperature - 32) * 5/9;
    } else { 
        cout << "Please use capital C or F." << endl;
        return 1;
    }

    cout << ctemperature << " degrees Celsius is equal to " << ftemperature << " degrees Fahrenheit.";

    return 0;
}