#include "LibrarySystem.h"
#include <iostream>

void LibrarySystem::addNewBook(int id, std::string title, std::string author) {
    library.addBook(id, title, author);
}

void LibrarySystem::borrowBook(int bookID) {
    Book* book = library.findBook(bookID);
    if (book && book->isAvailable) {
        book->isAvailable = false;  // Mark book as borrowed
        std::cout << "Book borrowed: " << book->title << std::endl;
    } else {
        std::cout << "Book not available. Adding to request queue..." << std::endl;
        queueSystem.requestBook(bookID);
    }
}

void LibrarySystem::returnBook(int bookID) {
    Book* book = library.findBook(bookID);
    if (book) {
        book->isAvailable = true;  // Mark book as returned
        std::cout << "Book returned: " << book->title << std::endl;

        // Process the next request in the queue
        int nextRequest = queueSystem.processRequest();
        if (nextRequest != -1) {
            std::cout << "Processing next request for book ID: " << nextRequest << std::endl;
            borrowBook(nextRequest);
        }
    } else {
        std::cout << "Book not found in the system." << std::endl;
    }
}

void LibrarySystem::displayBooks() {
    library.displayAvailableBooks();
}