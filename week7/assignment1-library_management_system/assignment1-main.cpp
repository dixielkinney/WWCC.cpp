//the main cpp

#include <iostream>
#include <limits>
#include "Library.h"
using namespace std;

int main() {
    Library library("Central City Library");

    int choice;
    do {
        cout << "LIBRARY MENU" << endl << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display All Books" << endl;
        cout << "3. Search by Author" << endl;
        cout << "4. Search by Title" << endl;
        cout << "5. Show Stats" << endl;
        cout << "6. Exit the Library Menu" << endl;
        cout << "Enter choice (1-6): " << endl;
        cin >> choice;

        cin.ignore(numeric_limits<streamsize>::max());

        if (choice == 1) {
            string title, isbn, authorName;
            int pubYear, birthYear;

            cout << "Enter title: ";
            getline(cin, title);

            cout << "Enter publication year: ";
            cin >> pubYear;
            cin.ignore();

            cout << "Enter ISBN: ";
            getline(cin, isbn);

            cout << "Enter author name: ";
            getline(cin, authorName);

            cout << "Enter author birth year: ";
            cin >> birthYear;
            cin.ignore();

            Author author(authorName, birthYear);
            Book book(title, pubYear, isbn, author);
            library.addBook(book);

            cout << "Book successfully added to the library!";
        } else if (choice == 2) {
            library.displayAllBooks();
        } else if (choice == 3) {
            string author;

            cout << "Enter author name: ";
            getline(cin, author);

            library.searchByAuthor(author);
        } else if (choice == 4) {
            string keyword;

            cout << "Enter title keyword: ";
            getline(cin, keyword);

            library.searchByTitle(keyword);
        } else if (choice == 5) {
            library.showStats();
        } else if (choice == 6) {
            cout << "Exiting the Library Menu... ";
        } else {
            cout << "Invalid Choice";
        } 
    } while (choice != 6);
    return 0;
}