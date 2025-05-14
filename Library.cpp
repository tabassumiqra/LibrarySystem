#include "Library.h"
#include <iostream>

void Library::addBook(int id, std::string title, std::string author) {
    books.push_back(Book(id, title, author));
}

void Library::displayAvailableBooks() {
    for (const auto& book : books) {
        if (book.isAvailable) {
            std::cout << "ID: " << book.bookID << ", Title: " << book.title 
                      << ", Author: " << book.author << std::endl;
        }
    }
}

Book* Library::findBook(int id) {
    for (auto& book : books) {
        if (book.bookID == id) {
            return &book;
        }
    }
    return nullptr;
}