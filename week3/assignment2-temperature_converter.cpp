// Coding Assignment 2: Temperature Conversion Tool

#include <iostream>
#include <iomanip> //for setw
#include <string> //for string
#include <algorithm>
using namespace std;

   
double temperatureValue;
char unit;
double ctemperature;
double ftemperature;
double ktemperature;

void celsiusConversions (){
    if (unit == 'C') {
        ctemperature = temperatureValue;
        ftemperature = (temperatureValue * 9 / 5) + 32;
        ktemperature = (temperatureValue + 273.15);
    }
}

void fahrenheitConversions (){
    if (unit == 'F') {
        ftemperature = temperatureValue;
        ctemperature = (temperatureValue - 32) * 5 / 9;
        ktemperature = (temperatureValue - 32) * 5 / 9 + 273.15;
    }
}

void kelvinConversions (){
    if (unit == 'K') {
        ktemperature = temperatureValue;
        ctemperature = (temperatureValue - 273.15);
        ftemperature = (temperatureValue - 273.15) * 9 / 5 + 32;
    }
}

int main(){

    cout << "Please enter a temperature value: ";
    cin >> temperatureValue;

    cout << "Please enter the unit of temperature (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;

    if (unit == 'C'){
        celsiusConversions();

        cout << "Temperature Conversions:" << endl;
        cout << "Celsius: " << temperatureValue << " degrees." << endl;
        cout << "Fahrenheit: " << ftemperature << " degrees." << endl;
        cout << "Kelvin: " << ktemperature << " degrees." << endl;
    }

    else if (unit == 'F') {
        fahrenheitConversions();

        cout << "Temperature Conversions:" << endl;
        cout << "Fahrenheit: " << temperatureValue << " degrees." << endl;
        cout << "Celsius: " << ctemperature << " degrees." << endl;
        cout << "Kelvin: " << ktemperature << " degrees." << endl;
    }

     else if (unit == 'K') {
        kelvinConversions();

        cout << "Temperature Conversions:" << endl;
        cout << "Kelvin: " << temperatureValue << " degrees." << endl;
        cout << "Celsius: " << ctemperature << " degrees." << endl;
        cout << "Fahrenheit: " << ftemperature << " degrees." << endl;
    }
}