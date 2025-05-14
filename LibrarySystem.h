#ifndef LIBRARYSYSTEM_H
#define LIBRARYSYSTEM_H

#include "Library.h"
#include "QueueSystem.h"

class LibrarySystem {
private:
    Library library;
    QueueSystem queueSystem;

public:
    void addNewBook(int id, std::string title, std::string author);
    void borrowBook(int bookID);
    void returnBook(int bookID);
    void displayBooks();
};

#endif