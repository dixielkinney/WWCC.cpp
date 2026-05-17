// Book.h

#ifndef BOOK_H
#define BOOK_H
#include <string>
#include "Author.h"
using namespace std;

class Book {
private:
    string title;
    int publicationYear;
    string isbn;
    Author author;

public:
    Book(string t = "", int p = 0, string i = "", Author a = Author());

    string getTitle() const;
    int getPublicationYear() const;
    string getISBN() const;
    Author getAuthor() const;

    void setPublicationYear(int year);
    void display() const;
};

#endif