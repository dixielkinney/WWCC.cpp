// Book.cpp

#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(string t, int p, string i, Author a)
    : title(t), publicationYear(p), isbn(i), author(a) {
}

string Book::getTitle() const {
    return title;
}

int Book::getPublicationYear() const {
    return publicationYear;
}

string Book::getISBN() const {
    return isbn;
}

Author Book::getAuthor() const {
    return author;
}

void Book::setPublicationYear(int year) {
    if (year > 0) {
        publicationYear = year;
    }
}

void Book::display() const {
    cout << "Title: " << title << endl;
    cout << "Publication Year: " << publicationYear << endl;
    cout << "ISBN: " << isbn << endl;
    author.display();
}