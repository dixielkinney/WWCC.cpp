// Library.h
#ifndef LIBRARY_H
#define LIBRARY_H
#include <vector>
#include "Book.h"
using namespace std;

class Library {
private:
    string name;
    vector<Book> books;

public:
    Library(string n);

    void addBook(const Book& book);
    void displayAllBooks() const;
    void searchByAuthor(string authorName) const;
    void searchByTitle(string keyword) const;
    void showStats() const;
};

#endif