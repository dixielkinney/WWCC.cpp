//Coding Assignment 1: Coin Flip Simulator.\


#include <iostream>
#include <cstdlib>  // For rand()
#include <ctime>    // For time()
#include <iomanip> // For setprecision
using namespace std;

int main() {
    srand(time(0));

    // int flips;
    // int heads = 0;
    // int tails = 0;

    double flips;
    double heads = 0;
    double tails = 0;

    cout << "Coin Flip Simulator" << endl;
    cout << "How many flips would you like to simulate? ";
    cin >> flips;

    cout << "Simulating " << flips << " coin flips..." << endl;
    
    for(int i = 0; i < flips; i++){
        int random_num = rand() % 2;
        if(random_num == 0) {
            heads++;
        } else {
            tails++;
        }
    }

    cout << "Results:" << endl;
    cout << "Heads: " << heads << endl;
    cout << "Tails: " << tails << endl;

    double percent_heads = (heads / flips) * 100.0;
    double percent_tails = (tails / flips) * 100.0; 

    cout << "Heads Percentage: " << std::fixed << std::setprecision(2)  << percent_heads << "%" << std::endl;
    cout << "Tails Percentage: " << std::fixed << std::setprecision(2)  << percent_tails << "%" << std::endl;

    return 0;
}