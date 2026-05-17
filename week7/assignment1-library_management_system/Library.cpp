// Library.cpp

#include "Library.h"
#include <iostream>
#include <algorithm>
using namespace std;

Library::Library(string n) {
    name = n;
}

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::displayAllBooks() const {
    if (books.empty()) {
        cout << "No books in the library." << endl;
        return;
    }
    for (const Book& book : books) {
        book.display();
    }
}

void Library::searchByAuthor(string authorName) const {
    transform(authorName.begin(), authorName.end(), authorName.begin(), ::tolower);

    bool found = false;

    for (const Book& book : books) {
        string author = book.getAuthor().getName();

        transform(author.begin(), author.end(), author.begin(), ::tolower);

        if (author.find(authorName) != string::npos) {
            book.display();
            found = true;
        }
    }
    if (!found) {
        cout << "No books were found in the library." << endl;
    }
}

void Library::searchByTitle(string keyword) const {
    transform(keyword.begin(), keyword.end(), keyword.begin(), ::tolower);
    
    bool found = false;

    for (const Book& book : books) {
        string title = book.getTitle();

        transform(title.begin(), title.end(), title.begin(), ::tolower);

        if (title.find(keyword) != string::npos) {
            book.display();
            found = true;
        }
    }
    if (!found) {
        cout << "No books were found in the library." << endl;
    }
}

void Library::showStats() const {
    cout << "Library Name: " << name << endl;
    cout << "Total Books: " << books.size() << endl;
}