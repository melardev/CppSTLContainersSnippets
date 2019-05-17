
#ifndef FIND_ELEMENTS_H
#define FIND_ELEMENTS_H

#include <iostream>
#include <list>
#include <string>
#include <algorithm>

namespace ListFindElements {

    int main() {

        std::list<int> list_object = {
                0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
        };

        std::cout << "List contents" << std::endl;
        std::list<int, std::allocator<int>>::const_iterator c_it = list_object.cbegin();
        while (c_it != list_object.cend()) {
            std::cout << *c_it << ", ";
            c_it++;
        }
        std::cout << std::endl << std::endl;

        int search_for = 4;
        std::list<int>::iterator it = std::find(list_object.begin(), list_object.end(), search_for);

        // find will return an iterator pointing to the END if it was NOT FOUND
        if (it != list_object.end()) {
            std::cout << search_for << " was found! " << std::endl;
        } else {

            std::cout << search_for << " was not found in the list" << std::endl;
        }

        search_for = 11;
        it = std::find(list_object.begin(), list_object.end(), search_for);

        // find will return an iterator pointing to the END if it was NOT FOUND
        if (it != list_object.end()) {
            std::cout << search_for << " was found! " << std::endl;
        } else {

            std::cout << search_for << " was not found in the list" << std::endl;
        }
    }
}
#endif //FIND_ELEMENTS_H
