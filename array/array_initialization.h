
#ifndef ARRAY_INITIALIZATION_H
#define ARRAY_INITIALIZATION_H

#include <array>
#include <iostream>

namespace ArrayInitialization {
    void dump_array(std::array<int, 10> &arr) {
        for (auto &elem : arr)
            std::cout << elem << " , ";
        std::cout << std::endl << std::endl;
    }


    int main() {
        // array will be created uninitialized, whatever is at the memory address where it is assigned
        // will be the current values, which is not usually the intended
        std::array<int, 10> array_1;
        std::cout << "std::array<int, 10> array_1;" << std::endl;
        dump_array(array_1);

        // Recommended way of initializing arrays
        // Create array initialized
        std::array<int, 10> array_2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        std::cout << "std::array<int, 10> array_2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}" << std::endl;
        dump_array(array_2);

        // Another way of initializing arrays
        std::array<int, 10> array_3{0};
        std::cout << "std::array<int, 10> array_3{0}" << std::endl;
        dump_array(array_3);

        std::array<int, 10> array_4{};
        std::cout << "std::array<int, 10> array_4{}" << std::endl;
        dump_array(array_4);

        // This array will have the 3 numbers , the other will be initialized with 0
        std::array<int, 10> array_5 = {12, 13, 14};
        std::cout << "std::array<int, 10> array_5 = {12, 13, 14};" << std::endl;
        dump_array(array_5);

        std::array<int, 10> array_6;
        // Initialize it with fill, I don't like this longer way
        array_6.fill(3);
        std::cout << "array_6.fill(3)" << std::endl;
        dump_array(array_6);


    }
}
#endif //ARRAY_INITIALIZATION_H
