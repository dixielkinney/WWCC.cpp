// Coding Assignment 0: Quiz Grade Tracker

#include <iostream>
#include <iomanip> //for setw
#include <string> //for string
#include <algorithm>
using namespace std;

double quizOne;
double quizTwo;
double quizThree;
double quizFour;
double quizFive;

int main(){
    cout << "QUIZ GRADE TRACKER" << endl;

    cout << "Enter score for Quiz 1 (0-100): ";
    cin >> quizOne;
    cout << endl;

    cout << "Enter score for Quiz 1 (0-100): ";
    cin >> quizTwo;
    cout << endl;

    cout << "Enter score for Quiz 1 (0-100): ";
    cin >> quizThree;
    cout << endl;

    cout << "Enter score for Quiz 1 (0-100): ";
    cin >> quizFour;
    cout << endl;

    cout << "Enter score for Quiz 1 (0-100): ";
    cin >> quizFive;
    cout << endl;
}

string gradeToLetter (){
    if (quizOne <= 90){
        cout << "Quiz 1: " << quizOne << " (A)" << endl;
    }
}