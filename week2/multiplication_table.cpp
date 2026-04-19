//Coding Assignment 3: Multiplication Table Generator

/*
    | 3  | 4  | 5  | 6  |
----|----|----|----|----|
 3  | 9  | 12 | 15 | 18 |
 4  | 12 | 16 | 20 | 24 |
 5  | 15 | 20 | 25 | 30 |
 6  | 18 | 24 | 30 | 36 |*/


#include <iostream>
#include <iomanip>  // For setw()
using namespace std;

int main() {
    int start, end;
    int cellWidth = 5;
    string pipe = " | ";

    cout << "Multiplication Table Generator" << endl << endl;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << left << setw(cellWidth) << " ";
    cout << pipe; 
    for (int i = start; i <= end; i++) {
        cout << left << setw(cellWidth) << i;
        cout << pipe;
    }
    cout << endl;

    for (int i = start-1; i <= end; i++) {
        cout << left << setw(cellWidth) << string(cellWidth, '-');
        cout << pipe;
    }

    if (start > end) {
        cout << "Error: Starting number must be less than ending number." << endl;
        return 1;
    }

    cout << endl;


    

    for (int i = start; i <= end; i++){
        cout << left << setw(cellWidth) << i << pipe;
        for (int j = start; j <= end; j++){
            //cout << left << setw(4) << i * j;

            cout << left << setw(cellWidth) << i * j;
            cout << pipe;
        }
        cout << endl;
    };

    return 0;
}