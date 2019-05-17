#ifndef BASIC_USAGE_H
#define BASIC_USAGE_H

/*
 * Lists are link double linked lists, the nodes are not stored in contiguous memory, this is why
 * we can not access element at given index without iterating through the list. This does not
 * happen on vectors for example where memory is contiguous so we can access any element given index
 * without iterating the vector.
 * Another consequence of this non contiguous nature is the validity of iterators. Iterators are still valid
 * after deleting an element(for example in a loop). This does not happen on vectors where if we delete
 * an element in a loop that iterator we are using is automatically invalid.
 * If you didn't understand the concept about contiguous memory you can search images with these keywords:
 * cpp contiguous memory vector list
 */

/* Summary:
 * 1. no random access, there is no [] operator.
 * 2. fast insert/remove at any place: O(1)
 * 3. slow search: O(n)
 */

#include <iostream>
#include <list>
#include <iterator>

namespace ListBasicUsage {

    void dump_list(const std::list<int> &numbers_list) {
        // const_iterator is like an iterator but we can not use it to change values
        // in other words, it is read-only
        std::list<int>::const_iterator it = numbers_list.cbegin();
        while (it != numbers_list.cend()) {
            std::cout << (*it) << ",  ";
            it++;
        }
        std::cout << std::endl << std::endl;
    }

    int main() {
        std::list<int> list_object;

        std::cout << "list just created" << std::endl;
        dump_list(list_object); // You will see nothing because it is empty

        list_object.push_back(10);
        list_object.push_back(11);
        list_object.push_back(12);

        std::cout << "push_back" << std::endl;
        dump_list(list_object);


        list_object.push_front(2);
        list_object.push_front(1);

        std::list<int>::iterator it = list_object.begin();
        std::cout << "push_front" << std::endl;
        dump_list(list_object);

        it = list_object.begin();
        // move position + 1, in other demo I show better ways of moving the iterator
        it++;
        it++;
        std::cout << "it++ x 2" << std::endl;
        dump_list(list_object); // this should not be different

        // Insert 3 at it+2 (at third position)
        list_object.insert(it, 3);
        std::cout << "insert" << std::endl;
        dump_list(list_object); // this should not be different

        it = list_object.begin();
        it++;
        it++;

        // Erase the 3
        list_object.erase(it);
        std::cout << "erase" << std::endl;
        dump_list(list_object); // this should not be different


        return 0;
    }
}
#endif //BASIC_USAGE_H
