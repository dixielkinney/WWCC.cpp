// Coding Assignment 2: Code Review and Refactoring

// Copy and pasted the code from the homework assignment

// it doesn't have its libraries, can't even run without those
#include <iostream>
#include <string>
using namespace std;

 // A class for managing a bank account
 // class names should be capitalized
class Account {
// the first one should be private
private:
    //changing variable names to be more obvious and know what it is at a glance
    string customerName;
    double balance;
    bool isOpen;
    int accountNumber;
    string accountType;

    // we needed interest rates constants for each type of account, so i added that
    static constexpr double savingsRate = 1.03;
    static constexpr double checkingRate = 1.01;
    static constexpr double businessRate = 1.005;

    //all this stuff below are the functions that work in the public
public:
    // setup is a no no so wanting to make it to object initializing when made
    // fixing variables so that they make sense right away
    Account(string name, int number, string type) {
        customerName = name;
        balance = 0;
        isOpen = true;
        accountNumber = number;
        accountType = type;

        // making it so that theres only 3 types of accounts, can't have anything else
        // if its not one of the options it'll go to checking
        if (accountType ==  "savings" || accountType == "checking" || accountType == "business") {
            accountType = type;
        } else {
            accountType = "checking";

            cout << "Invalid account type." << endl;
            cout << "Defaulting to checking account." << endl;
        }
    }

    // this currently allows the user to deposit negative numbers aka no real money if its negative
    // ifs for if its a closed account, if theres a balance, or if theres a negative number
    // changing x to amount
    void deposit(double amount) {
        if (!isOpen) {
            cout << "Account is closed." << endl;
            return;
        } else if (amount > 0) {
            balance += amount;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    // withdraw allows ANYTHING, don't want the account to be negative, so fixing that
    // fixed it by using an if statement for if the account is closed, amount is negative, or there isn't enough moneys 
    // changing x to amount for clarity
    void withdraw(double amount) {
        if (!isOpen) {
            cout << "Account is closed." << endl;
            return;
        } else if (amount <= 0) {
            cout << "Withdrawal amount must be positive. " << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds." << endl;
        } else {
            balance -= amount;
        }
    }

    // changed function name to make more sense 
    // used my rate variables i made above instead of the * interest values for a cleaner look
    void applyInterest() {
        if (accountType == "savings") {
            balance = balance *= savingsRate;
        } else if (accountType == "checking") {
            balance = balance *= checkingRate;
        } else if (accountType == "business") {
            balance = balance *= businessRate;
        }
    }

    // added const because print doesn't modify
    void print() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Status: " << (isOpen ? "Open" : "Closed") << endl;
    }

    // changed the function name for calrity and easy read
    void closeAccount() {
        isOpen = false;
    }

    //changed function name again for clarity and easy to read
    // added const to not modify
    double getBalance() const{
        return balance;
    }
};

// adding a main function so that i can test my code
int main() {
    // customer name, account number, then account type
    Account account1("User", 510, "savings");

    // how much to deposit THEN withdraw
    account1.deposit(500);
    account1.withdraw(200);

    // apply interest
    account1.applyInterest();
    // then print the final balance
    account1.print();

    return 0;
}