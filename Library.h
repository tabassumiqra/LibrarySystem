#ifndef LIBRARY_H
#define LIBRARY_H

#include <list>
#include "Book.h"

class Library {
private:
    std::list<Book> books;

public:
    void addBook(int id, std::string title, std::string author);
    void displayAvailableBooks();
    Book* findBook(int id);
};

#endif