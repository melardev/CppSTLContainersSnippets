#ifndef DEQUE_BASIC_USAGE_H
#define DEQUE_BASIC_USAGE_H

#include <iostream>
#include <deque>
// Deque are like double linked lists, you can add/remove elements at the front and back.
// Also in the middle but it is not that good.
// How it works internally? it allocates a chunk of memory, you keep adding elements either at the front
// or at the back, when that chunk is filled, the deque automatically will allocate more memory to fill
// next elements, dequeue keeps track of those.

// Summary:
// 1. Reallocation is managed internally, there is no reserve() nor capacity() method.
// 2. Good performance insert/remove at the beginning
// 3. Good performance insert/remove at the end
// 4. Slow insert/remove in the middle
// 5. Search speed: O(n)


// Comparisons
// Vectors:
// Vector has a better performance, but if you need to push_front and push_back a lot
// then deque is a very good choice.
// When you use your own data type as the template argument then
// the performance difference is not that big.

namespace DequeBasicUsage {

    void dump_dequeue(const std::deque<int> &dq) {
        // for loop while i < .size()
        for (int i = 0; i < dq.size(); i++)
            std::cout << dq[i] << ", ";
        std::cout << std::endl << std::endl;
    }

    int main() {
        // the template argument is the data type we will be holding in this deque
        std::deque<int> dequeue_object;

        std::cout << "Dequeue just created" << std::endl;
        dump_dequeue(dequeue_object); // You will see nothing because it is empty

        dequeue_object.push_back(10);
        dequeue_object.push_back(11);
        dequeue_object.push_back(12);

        std::cout << "push_back" << std::endl;
        dump_dequeue(dequeue_object);


        // .push_front()
        dequeue_object.push_front(1);
        dequeue_object.push_front(2);
        dequeue_object.push_front(3);

        std::cout << "push_front" << std::endl;
        dump_dequeue(dequeue_object);


        dequeue_object.pop_back();
        std::cout << "pop_back" << std::endl;
        dump_dequeue(dequeue_object);

        dequeue_object.pop_front();
        std::cout << "pop_front" << std::endl;
        dump_dequeue(dequeue_object);

        return 0;
    }
}
#endif //DEQUE_BASIC_USAGE_H
