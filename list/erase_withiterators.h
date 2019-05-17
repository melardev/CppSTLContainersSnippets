#ifndef ERASE_WITHITERATORS_H
#define ERASE_WITHITERATORS_H

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

namespace ListEraseWithIterators {

    void dump_list(const std::list<int> &list_object) {
        auto c_it = list_object.cbegin();
        while (c_it != list_object.cend()) {
            std::cout << *c_it << ", ";
            c_it++;
        }
    }

    int main() {

        std::list<int> list_object{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        std::cout << "Starting point" << std::endl;
        dump_list(list_object);
        std::cout << std::endl << std::endl;


        std::list<int>::iterator list_iterator = list_object.begin();
        list_iterator++; // point to the next element (second element)
        list_iterator++; // point to the next element (third element)

        // Remove the third element (iterator points to index 2, which means third position)
        list_iterator = list_object.erase(list_iterator);
        std::cout << "Erase" << std::endl;
        dump_list(list_object);
        std::cout << std::endl << std::endl;

        list_iterator++; // point to the next element (forth element)
        list_iterator++; // point to the next element (fifth element)

        // Erase everything from where iterator is pointing, to the end
        list_object.erase(list_iterator, list_object.end());

        std::cout << "Erase" << std::endl;
        dump_list(list_object);
        std::cout << std::endl << std::endl;
        return 0;
    }
}
#endif //ERASE_WITHITERATORS_H
