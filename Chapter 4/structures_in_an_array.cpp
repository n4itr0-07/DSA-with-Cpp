#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    int year;
};

int main() {
    // Create an array of structures
    Book books[3] = {
        {"1984", "George Orwell", 1949},
        {"To Kill a Mockingbird", "Harper Lee", 1960},
        {"The Great Gatsby", "F. Scott Fitzgerald", 1925}
    };

    // Loop through the array and print the book details
    for (int i = 0; i < 3; i++) {
        cout << "Book " << i + 1 << " Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Year: " << books[i].year << endl;
        cout << endl;
    }

    return 0;
}
