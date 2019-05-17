
#ifndef ARRAY_SIZE_H
#define ARRAY_SIZE_H

#include <array>
#include <iostream>

namespace ArraySize {
    int main() {

        std::array<int, 10> numbers{};
        // size() is always equal to the second argument provided in the template param
        std::cout << "numbers.size() = " << numbers.size() << std::endl;
        std::cout << "sizeof(numbers) = " << sizeof(numbers) << std::endl;
        std::cout << "sizeof(int) * numbers.size() = " << sizeof(int) * numbers.size() << std::endl;
        std::cout << "numbers.max_size() = " << numbers.max_size() << std::endl;
        return 0;
    }
}
#endif //ARRAY_SIZE_H
