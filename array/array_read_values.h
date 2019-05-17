
#ifndef ARRAY_READ_VALUES_H
#define ARRAY_READ_VALUES_H

#include <iostream>
#include <array>
#include <algorithm>

namespace ArrayReadValues {

    int main() {
        // First template arg is the datatype of this array container
        // Second template arg is the size
        std::array<int, 10> array_1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        // get the element at fifth position(index 4)
        int value_at_4 = array_1[4];
        std::cout << "array_1[4]: " << value_at_4 << std::endl;

        // Should be the same
        value_at_4 = array_1.at(4);
        std::cout << "array_1.at(4): " << value_at_4 << std::endl;

        int value_at_20;
        try {
            // Out of bounds access lead to undefined behaviour, you may get anything present
            // in that memory region, or crash if access violation
            value_at_20 = array_1[20];
            std::cout << "array_1[20]: " << value_at_20 << std::endl;

            // at triggers a runtime exception if out of bands access was intended
            value_at_20 = array_1.at(20);

            std::cout << "array_1.at(20): " << value_at_20 << std::endl;
        }
        catch (const std::out_of_range &exception) {
            std::cerr << "Error: " << exception.what() << std::endl;
        }

        // Getting elements through get<>
        // The advantage is that it throws an exception if we try to retrieve something
        // out of bounds AT COMPILE TIME!!!

        value_at_4 = std::get<4>(array_1);
        std::cout << "std::get<4>(array_1): " << value_at_4 << std::endl;

        // The below line script will not compile
        // value_at_20 = std::get<12>(array_1);


        // Get first element
        std::cout << "array_1.front(): " << array_1.front() << std::endl;
        // Get last
        std::cout << "array_1.back(): " << array_1.back() << std::endl;

        return 0;
    }
}
#endif //ARRAY_READ_VALUES_H
