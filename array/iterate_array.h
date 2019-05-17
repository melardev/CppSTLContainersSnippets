
#ifndef ITERATE_ARRAY_H
#define ITERATE_ARRAY_H

#include <iostream>
#include <array>
#include <algorithm>

namespace IterateArray {
    int main() {

        std::array<int, 10> array_1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        std::cout << "Range based for loop" << std::endl;
        // Iterate over std::array using range based for loop
        for (auto &elem : array_1) {
            std::cout << elem << " , ";
        }
        std::cout << std::endl;

        std::cout << "for loop and [] operator" << std::endl;
        // Iterate over std::array using for loop and operator []
        for (int i = 0; i < array_1.size(); i++) {
            std::cout << array_1[i] << " , ";
        }
        std::cout << std::endl;

        std::cout << "Using iterators" << std::endl;
        // Iterate over std::array using for Iterators
        auto it = array_1.begin();
        while (it != array_1.end()) {
            std::cout << *it << " , ";
            it++;
        }
        std::cout << std::endl;

        std::cout << "Using STL for_each algorithm" << std::endl;
        // Iterate over std::array using for_each STL algorithm
        std::for_each(array_1.begin(), array_1.end(), [](const int &elem) {
            std::cout << elem << " , ";
        });

        std::cout << std::endl;
    }
}
#endif //ITERATE_ARRAY_H
