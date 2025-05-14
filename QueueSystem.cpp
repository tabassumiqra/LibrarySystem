#include "QueueSystem.h"

void QueueSystem::requestBook(int bookID) {
    bookRequestQueue.push(bookID);
}

int QueueSystem::processRequest() {
    if (!bookRequestQueue.empty()) {
        int bookID = bookRequestQueue.front();
        bookRequestQueue.pop();
        return bookID;
    }
    return -1; // No pending requests
}