// Midterm Assignment - Application Project

#include <iostream>
#include <cctype> // toupper and tolower
#include <string>
#include <sstream> // stringstream class
#include <limits> // for my pause return to menu
using namespace std;

// Choosing Project Option 1
// I need student info- student names, student GPA, days present, total days
// multiple students to ad remove
// need total students in the class
// asking for student info
// using total students in class to find the class GPA average
// leads into honor roll kids
// needing an attentence report for the dayspresent vs total days
// searching, adding or removing kids with ID



// Use of Struct to organize and have initializers
// Use of the hint in the project but giving my own more detailed names
struct studentInfo {
    int studentID;
    string studentName;
    double studentGPA;
    int daysPresent;
    int totalDays;
};

// Use of a function to add student to class, so giving the imaginary student an ID, name, GPA, how often they're present and then the total days. counter for how many students
// using cin.ignore to clear the old line
// get line so that i can have first and last name
void addStudent(studentInfo students[], int &count) {
    // how big the class can be, so no more than 15 students
    if (count >= 15) {
        cout << "There are no more seats for students; class is full!" << endl;
        return;
    }
    
    // Student[count] to count how many students are in the grade tracker
    cout << "ADD A STUDENT" << endl;
    
    cout << "Enter Student ID: ";
    cin >> students[count].studentID;

    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, students[count].studentName);

    cout << "Enter Student GPA: ";
    cin >> students[count].studentGPA;

    cout << "Days Student Present: ";
    cin >> students[count].daysPresent;

    cout << "Total Days of School: ";
    cin >> students[count].totalDays;

    count++;
    cout << "Student has been successfully added!" << endl;
}

// This is to show ALL the students that have been added to the class/ grade n absences tracker
// Displays the student ID - student name - student GPA
// using void because i just want to call it later, not actually return something
void displayStudents(studentInfo students[], int count){
    cout << "STUDENT LIST" << endl;

    for (int i = 0; i < count; i++) {
        cout << students[i].studentID << " - ";
        cout << students[i].studentName << " - ";
        cout << "GPA: " << students[i].studentGPA << endl;
    }
}

// my search to find students
// uses void to simply later call it and not return
// searches for students using the ID that was created when adding the student
// if ID isnt found then runs the "student not found"
void searchStudent(studentInfo students[], int count) {
    int studentID;
    cout << "SEARCH A STUDENT" << endl;
    cout << "Enter Student ID to search: ";
    cin >> studentID;

    for (int i = 0; i < count; i++) {
        if (students[i].studentID == studentID) {
            cout << "Found: " << students[i].studentName;
            cout << " GPA: " << students[i].studentGPA << endl;
            return;
        }
    }
    cout << "Student not found." << endl;
}

// using void because I just wanna call it
//runs an if statement if theres no students at all
// average is adding up the GPA's and then dividing by total students
void classAverage(studentInfo students[], int count) {
    cout << "AVERAGE OF CLASS" << endl;
    if (count == 0) {
        cout << "No students in class." << endl;
        return;
    }

    double sum = 0;

    for (int i = 0; i < count; i++) {
        sum += students[i].studentGPA;
    }

    cout << "Class GPA Average: " << sum / count << endl;
}

// my function for removing a student from the class
// void cause calling not returning
// finds the student ID and then compares and then follows to the count-- which removes the student
// if it cant find the student then runs the cout student not found
void removeStudent(studentInfo students[], int &count) {
    int studentID;
    cout << "Enter Student ID to remove: ";
    cin >> studentID;

    for (int i = 0; i < count; i++) {
        if (students[i].studentID == studentID) {
            for (int j = 1; j < count - 1; j++){
                students[j] = students[j + 1];
            }
            count--;
            cout << "Student has been successfully removed." << endl;
            return;
        }
    }
    cout << "Student not found." << endl;
}

// void function to call in my menu
// formula for attendence percentage for each student by their name
void attendenceReport(studentInfo students[], int count) {
    cout << "ATTENDANCE REPORT" << endl;

    for (int i = 0; i < count; i++) {
        double percent = (double)students[i].daysPresent / students[i].totalDays * 100;

        cout << students[i].studentName;
        cout << " - " << percent << "%" << endl;
    }
}

// void for calling later not returning
// finds students whose GPA's are higher than 3.5 to make honor roll
void honorRoll(studentInfo students[], int count) {
    cout << "HONOR ROLL" << endl;
    bool found = false;
    
    for (int i = 0; i < count; i++) {
        if (students[i].studentGPA >= 3.5) {
            cout << students[i].studentName << "'s GPA: " << students[i].studentGPA << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No student in Honor Roll." << endl;
    }
}

// created this after debugging and didn't like how my code immediately went back to the menu
// using streamsize for what it can take and ignore for what it cant
void returnToMenu(){
    cout << "Press Enter to return to Student Tracking Menu...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

// This is my main int to call my functions and structs and everything to display all the info and create the menu and options
// uses a switch menu instead of a bunch of if's and else ifs for if the user picks 1, 2... and so on
// using a do while because i want it to run and then check
// noticed that it breaks if inputing anything not a number so the numeric_limits fixes it, ignoring everything streamsize can hold and then ignoring everything until new line
int main() {
    studentInfo students[15];
    int count = 0;
    int menuChoice;

    cout << "STUDENT TRACKING MENU" << endl;

    do {
        cout << "1. Add Student" << endl;
        cout << "2. Remove Student" << endl;
        cout << "3. Display Students" << endl;
        cout << "4. Search Student" << endl;
        cout << "5. Class GPA Average" << endl;
        cout << "6. Attendence Report" << endl;
        cout << "7. Honor Roll" << endl;
        cout << "8. Exit Menu" << endl;
        cout << "Enter Menu Choice (1-8): ";
        cin >> menuChoice;
        if (cin.fail()) {
            cout << "Invalid Choice" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            continue;
        }

        switch (menuChoice) {
            case 1: addStudent(students, count); returnToMenu(); break;
            case 2: removeStudent(students, count); returnToMenu(); break;
            case 3: displayStudents(students, count); returnToMenu(); break;
            case 4: searchStudent(students, count); returnToMenu(); break;
            case 5: classAverage(students, count); returnToMenu(); break;
            case 6: attendenceReport(students, count); returnToMenu(); break;
            case 7: honorRoll(students, count); returnToMenu(); break;
            case 8: cout << "Exiting the Student Menu..." << endl; break;
            default: cout << "Invalid Choice" << endl;
        }
    } while (menuChoice != 8);

    return 0;
}
