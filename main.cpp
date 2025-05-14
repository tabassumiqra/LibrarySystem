#include "LibrarySystem.h"
#include <iostream>

int main() {
    LibrarySystem librarySystem;

    // Add books
    librarySystem.addNewBook(1, "The Great Gatsby", "F. Scott Fitzgerald");
    librarySystem.addNewBook(2, "To Kill a Mockingbird", "Harper Lee");

    // Display available books
    librarySystem.displayBooks();

    // Borrow a book
    librarySystem.borrowBook(1);

    // Try borrowing the same book again (it will add to request queue)
    librarySystem.borrowBook(1);

    // Return the book
    librarySystem.returnBook(1);

    return 0;
}