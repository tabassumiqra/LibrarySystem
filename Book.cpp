#include <string>

class Book {
public:
    int bookID;
    std::string title;
    std::string author;
    bool isAvailable;

    Book(int id, std::string title, std::string author)
        : bookID(id), title(title), author(author), isAvailable(true) {}
};