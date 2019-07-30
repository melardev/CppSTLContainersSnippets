
#ifndef QUEUE_BASIC_USAGE_H
#define QUEUE_BASIC_USAGE_H

#include <iostream>
#include <queue>

/*
 queue:  it is a FIFO data structure.
 most used methods: push(), pop(), front(), back().

priority queue: first item always has the greatest priority push(), pop(), top().
*/
namespace QueueBasicUsage {
    int main() {
        std::queue<int> q;
        q.push(0);
        q.push(1);
        q.push(2);
        q.push(3);

        while (!q.empty()) {
            int &front = q.front();
            std::cout << ' ' << front;
            q.pop();
        }
    }
}
#endif //BASIC_USAGE_H
