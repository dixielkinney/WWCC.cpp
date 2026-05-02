// Coding Assignment 1: Text Analyzer

#include <iostream>
#include <string> //for string
#include <cctype> // for toupper() and tolower()
#include <sstream> // for stringstream
#include <iomanip> // for word.erase
#include <algorithm> // for word average
using namespace std;

string sentence;

int charactersCount(const string& sentence) {
     return sentence.length();
}

int wordCount(const string& sentence) {
    stringstream ss(sentence);
    string word;
    int count = 0;
    while (ss >> word) {
        count ++;
    }
    return count;
}

int sentenceCount(const string& sentence){
    int count =0;
    for(char c : sentence) {
        if (c == '.' || c == '!' || c == '?') {
            count++;
        }
    }
    return count;
}

string longestWord(const string& sentence) {
    stringstream ss(sentence);
    string word;
    string longest = "";

    while(ss >> word) {
        word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());

        if(word.length() > longest.length()) {
            longest = word;
        }
    }
    return longest;
}

double averageWordLength(const string& sentence) {
    stringstream ss(sentence);
    string word;
    int totalSentenceLength = 0;
    int sentenceWordCount = 0;

    while(ss >> word) {
        word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
        
        totalSentenceLength += word.length();
        sentenceWordCount++;
    }
    if(sentenceWordCount == 0) return 0.0;
    return static_cast<double>(totalSentenceLength) / sentenceWordCount;
}

string capitalizeSentence(string sentence) {
    for(char& c : sentence) {
        c = toupper(c);
    }
    return sentence;
}

string lowercaseSentence(string sentence) {
     for(char& c : sentence) {
        c = tolower(c);
    }
    return sentence;
}

int main() {
    cout << "TEXT ANALYZER" << endl;
    cout << "-------------" << endl;

    cout << "Enter a sentence or paragraph: " << endl;
    getline(cin, sentence);

    cout << "Analysis: " << endl;
    cout << "Character Count (including spaces): " << charactersCount(sentence) << endl;
    cout << "Word Count: " << wordCount(sentence) << endl;
    cout << "Sentence Count: " << sentenceCount(sentence) << endl;
    cout << "Longest Word: " << longestWord(sentence) << endl;
    cout << "Average Word Length: " << averageWordLength(sentence) << endl;

    cout << "All Uppercase: " << endl;
    cout << capitalizeSentence(sentence) << endl;
    cout << "All Lowercase: " << endl;
    cout << lowercaseSentence(sentence);
    return 0;
}