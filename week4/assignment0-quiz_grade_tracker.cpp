// Coding Assignment 0: Quiz Grade Tracker

#include <iostream>
#include <iomanip> //for setw
#include <string> //for string
#include <algorithm>
using namespace std;

void printGrade(double quizScores, int quizNumbers);
char getOverallGrade(double avg);

int main(){
    double quizzes[5];
    double sum = 0;

    int letterGradeA = 0;
    int letterGradeB = 0;
    int letterGradeC = 0;
    int letterGradeD = 0;
    int letterGradeF = 0;

    cout << "QUIZ GRADE TRACKER" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Enter score for Quiz " << (i + 1) << " (0-100): ";
        cin >> quizzes[i];

        //to find the average
        sum += quizzes[i];

        //Counting how many A's etc there are        
        if (quizzes[i] >= 90) {
            letterGradeA++;
        } else if (quizzes[i] >= 80) {
            letterGradeB++;
        } else if (quizzes[i] >= 70) {
            letterGradeC++;
        } else if (quizzes[i] >= 60) {
            letterGradeD++;
        } else {
            letterGradeF++;
        }
    }

    double highestQuiz = quizzes[0];
    double lowestQuiz = quizzes[0];

    int highestQuizNum = 0;
    int lowestQuizNum = 0;

    for (int i = 1; i < 5; i++) {
        if (quizzes[i] > highestQuiz) {
            highestQuiz = quizzes[i];
            highestQuizNum = i;
        }
        if (quizzes[i] < lowestQuiz) {
            lowestQuiz = quizzes[i];
            lowestQuizNum = i;
        }
    }

    cout << "Quiz Results: " << endl;

    for( int i = 0; i < 5; i++) {
        printGrade(quizzes[i], i + 1);
    }

    double average = sum / 5;

    cout << endl; 

    cout << "STATISTICS" << endl;
    cout << "Average Score: " << average << endl;
    cout << "Highest Score: " << highestQuiz << " (Quiz " << highestQuizNum + 1 << ") " << endl;
    cout << "Lowest Score: " << lowestQuiz << " (Quiz " << lowestQuizNum + 1<< ") " << endl;
    cout << "Overall Grade: " << getOverallGrade(average) << endl;
    cout << endl;

    cout << "GRADE DISTRIBUTION" << endl;
    cout << "A's: " << letterGradeA << endl;
    cout << "B's: " << letterGradeB << endl;
    cout << "C's: " << letterGradeC << endl;
    cout << "D's: " << letterGradeD << endl;
    cout << "F's: " << letterGradeF << endl;

    return 0;
}

void printGrade(double quizScores, int quizNumbers) {
    cout << "Quiz " << quizNumbers << ": ";

    if (quizScores >= 90){
        cout << quizScores << " (A)" << endl;
    } else if (quizScores >= 80){
        cout << quizScores << " (B)" << endl;
    } else if (quizScores >= 70){
        cout << quizScores << " (C)" << endl;
    } else if (quizScores >= 60){
        cout << quizScores << " (D)" << endl;
    } else {
        cout << quizScores << " (F)" << endl;
    }
}

char getOverallGrade(double avg){
    if (avg >= 90) {
        return 'A';
    } else if (avg >= 80) {
        return 'B';
    } else if (avg >= 70) {
        return 'C';
    } else if (avg >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}