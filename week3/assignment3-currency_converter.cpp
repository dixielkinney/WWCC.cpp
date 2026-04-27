// Coding Assignment 3: Currency Converter

#include <iostream>
#include <iomanip> //for setw
#include <string> //for string
#include <algorithm>
using namespace std;


string USDtoEUR = "1. Convert USD to Euro (EUR)";
string USDtoGBP = "2. Convert USD to British Pound (GBP)";
string USDtoJPY = "3. Convert USD to Japanese Yen (JPY)";
string exitMenu = "4. Exit";
string optionNumber;
string yesnoOption;

double USDamount;

int conversionCounter = 0;

double convertUSDtoEUR(double amount){
    if (optionNumber == "1"){
        amount = USDamount * 0.85;
    }
    return amount;
}

double convertUSDtoGBP(double amount){
    if (optionNumber == "2"){
        amount = USDamount * 0.74;
    }
    return amount;
}

double convertUSDtoJPY(double amount){
    if (optionNumber == "3"){
        amount = USDamount * 110.33;
    }
    return amount;
}

int getConversionCount(){
    return conversionCounter++;
}

int main(){
    cout << "CURRENCY CONVERTER" << endl;

    yesnoOption = "y";

    while (yesnoOption == "y") {

        cout << USDtoEUR << endl;
        cout << USDtoGBP << endl;
        cout << USDtoJPY << endl;
        cout << exitMenu << endl;

        cout << "Enter your choice (1-4): ";
        cin >> optionNumber;

        if (optionNumber == "1"){
            cout << "Enter your amount in USD: ";
            cin >> USDamount;

            double result = convertUSDtoEUR(USDamount);
            cout << "$" << USDamount << " = " << result << " EUR." << endl;
        }
        else if (optionNumber == "2"){
            cout << "Enter your amount in USD: ";
            cin >> USDamount;

            double result = convertUSDtoGBP(USDamount);
            cout << "$" << USDamount << " = " << result << " GBP." << endl;
        }
        else if (optionNumber == "3"){
            cout << "Enter your amount in USD: ";
            cin >> USDamount;

            double result = convertUSDtoJPY(USDamount);
            cout << "$" << USDamount << " = " << result << " JPY." << endl;
        }
        else if (optionNumber == "4"){
            cout << "Exiting Menu...";
            return 0;
        }

        cout << "Number of conversions performed: " << getConversionCount() << endl;

        cout << "Would you like to perform another conversion? (y/n): " << endl;
        cin >> yesnoOption;
    }

    if (yesnoOption != "y"){
        cout << "Exiting Menu..." << endl;
        cout << "Thank you for using Currency Converter!";
    }
    return 0;
}