Dixie Kinney
CS&131
Midterm Assignment - Application Project
May 2, 2026

This my README for my Midterm Project.
For my Midterm Project I choose Project Option 1, the Student Tracker.

What is the Student Tracker?
    The Student Tracker is a C++ program designed using skills taught in CS&131 and made using the hints given in the assignment about the Midterm.
    The program allows the user to create 15 students before the tracker is full. Each student is added having information such as their student ID, name, GPA, and their attendence. 
    When the program is first run (See How to Run), the user will be shown a menu which will allow the user to add or remove students, display students, search for a student by ID, find the class GPA average, create an attendance report, show the honor roll of students (GPA equal to or greater than 3.5), and exit the menu if wished.
Where is the information stored?
    For this project I used a struct to store my information.
    The struct stores the student information in this piece of code (Lines 21 to 27):
    struct studentInfo {
        int studentID;
        string studentName;
        double studentGPA;
        int daysPresent;
        int totalDays;
    };
    (Copy and pasted from my program)
How to Run the Program:
    After downloading the program, the user can then use a terminal of their choice (I personally used the Visual Studio Code terminal). In the terminal the user will type:
        g++ midterm.cpp -o midterm
    This is to compile the program and ensure everything is there. From there the user will want to run the program:
        ./midterm
    This will run the program and open up the menu that the user can now select from. 
    *Recommended having MinGW as a compiler as that is what is originally used for this program
What Concepts were used?
    In this program I used structs, functions, arrays, loops (for, do, while), conditional statements (if and switch), input validations (cin.fail and cin.ignore), and strings (string and getline).
How do you use this Program?
    To use this program, make sure to compile it and then run it (As answered in "How to Run the Program"). Once you run it you will be greeted with a menu called the Student Tracking Menu
    Example of how the menu looks:
        STUDENT TRACKING MENU
        1. Add Student
        2. Remove Student
        3. Display Students
        4. Search Student
        5. Class GPA Average
        6. Attendence Report
        7. Honor Roll
        8. Exit Menu
        Enter Menu Choice (1-8): 
    In order to properly use the program you'll need to create at least one student. So enter the choice of "1" which will allow you to add a student. Fill out the respective information (ID, name, GPA, etc) to your desires. From there the menu choices will give you proper information such as displaying students, searching students, honor roll, etc.

Thank you for using my Student Tracker Program!

Dixie Kinney
Student Tracker Program
C++ Program