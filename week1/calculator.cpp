//Code Assignment 2: Basic Math Calculator

#include <iostream>
using namespace std;

int main() {
    double num1;
    double num2;
    double result1;
    double result2;
    double result3;
    double result4;

    cout << "Please enter your first number: " << endl;
    cin >> num1;

    cout << "Please enter your second number: " << endl;
    cin >> num2;

    result1 = num1 + num2;
    result2 = num1 - num2;
    result3 = num1 * num2;
    result4 = num1 / num2;

    cout << "Results: " << endl;

    cout << "Sum: ";
    cout << result1 << endl;

    cout << "Difference: ";
    cout << result2 << endl;

    cout << "Product: ";
    cout << result3 << endl;

    cout << "Quotient: ";
    cout << result4 << endl;
}