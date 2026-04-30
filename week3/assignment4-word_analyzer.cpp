// Coding Assignment 4: Word Analyzer

#include <iostream>
#include <string> //for string
#include <cctype> // for toupper()
using namespace std;

string word;
string analyzeWord;
string yesnoOption = "y";

int countVowels(string word){
    int count = 0;

    for (char c : word){
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            count++;
        }
    }
    return count;
}

int countConsonants(string word){
    int count = 0;

    for (char c: word){
        c = tolower(c);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){
            count++;
        }
    }
    return count;
}

bool isPalindrome(string word){
    int left = 0;
    int right = word.length() - 1;

    while (left < right){
        if (tolower(word[left]) != tolower(word[right])){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

char firstLetter(string word){
    return word[0];
}

string reverseWord(string word){
    string reversed = "";
    for (int i = word.length() - 1; i >= 0; i--){
        reversed += word[i];
    }
    return reversed;
}

int main(){
    
    while (yesnoOption == "y"){
        cout << "Enter a word: ";
        cin >> word;

        cout << "Original Word: " << word << endl;
        cout << "Number of Vowels: " << countVowels(word) << endl;
        cout << "Number of Consonants: " << countConsonants(word) << endl;
        cout << "First Letter: " << firstLetter(word) << endl;
        cout << "Reversed: " << reverseWord(word) << endl;
        if (isPalindrome(word)) {
        cout << "Is it a Palindrome: Yes" << endl;
        } else {
            cout << "Is it a Palindrome: No" << endl;
        }

        cout << "Would you like to analyze another word? (y/n): ";
        cin >> yesnoOption;
    }

    return 0;
}