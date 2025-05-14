#ifndef QUEUESYSTEM_H
#define QUEUESYSTEM_H

#include <queue>

class QueueSystem {
private:
    std::queue<int> bookRequestQueue;

public:
    void requestBook(int bookID);
    int processRequest();
};

#endif