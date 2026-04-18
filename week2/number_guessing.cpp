// Coding Assignment 2: Number Guessing Game

#include <iostream>
#include <cstdlib>  // For rand()
#include <ctime>    // For time()
using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Number Guessing Game" << endl;                                     //title of game
    cout << "I'm thinking of a number between 1 and 100." << endl << endl;      //choosing a random number

    cout << secretNumber << endl;                                                //what does this do

    while (guess != secretNumber){                                              //start loop
        cout << "Enter your guess: " << endl;                                   //ask question
        cin >> guess;
        cout << "You guessed " << guess << endl;
        attempts++;                                                           

        if (guess == secretNumber){                                             //if the guess is equal to the number, gives happy msg and how many guesses it took
        cout << "Yay! You guessed correctly!" << endl;
        cout << "It took you " << attempts << " guesses." << endl;
        } else if (guess <= secretNumber) {                                     //if the answer is LESS THAN the number, tells user that and try again -> go to enter your guess
        cout << "Your guess was less than the number! Try again." << endl;
        cout << "It took you " << attempts << " guesses." << endl;
        } else if (guess >= secretNumber){                                     //if answer is GREATER THAN the number, tells user that and try again -> go to enter your guess
        cout << "Your guess was higher than the number! Try again." << endl;
        cout << "It took you " << attempts << " guesses." << endl;
        }
    }
    
    return 0;
}