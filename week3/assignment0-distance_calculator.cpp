// Coding Assignment 0: Distance Calculator

#include <iostream>
#include <iomanip> //for setw
#include <cstdio> // for printf
#include <cmath> // for sqrt
using namespace std;

double x_1;
double y_1;
double x_2;
double y_2;

int main() {
    cout << "Enter the coordinates of the first point: " << endl;
    cout << "x1: ";
    cin >> x_1;
    cout << "y1: ";
    cin >> y_1;

    cout << "Enter the coordinates of the second point: " << endl;
    cout << "x2: ";
    cin >> x_2;
    cout << "y2: ";
    cin >> y_2;

    double calculateDistance = sqrt(pow((x_2 - x_1), 2) + pow((y_2 - y_1),2));

    cout << "The distance between (" << x_1 << "," << y_1 << ") and (" << x_2 << "," << y_1 << ") is: " << calculateDistance << endl;

    double calculateMidpoint = ((x_1 + x_2)/2, (y_1 + y_2)/2);
    cout << "The midpoint of the points (" << x_1 << "," << y_1 << ") and (" << x_2 << "," << y_1 << ") is: " << calculateMidpoint;
    return 0;
}