#ifndef ARRAY_SWAP_H
#define ARRAY_SWAP_H

#include <iostream>
#include <array>
#include <tuple>
#include <vector>

namespace ArraySwap {

    void dump_array(std::array<int, 10> &arr) {
        for (int i = 0; i < arr.size(); i++) {
            std::cout << arr[i] << " , ";
        }
        std::cout << std::endl << std::endl;
    }

    int main() {
        std::array<int, 10> array_1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
        std::array<int, 10> array_2 = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

        std::cout << "Starting point array_1" << std::endl;
        dump_array(array_1);
        std::cout << "Starting point array_2" << std::endl;
        dump_array(array_2);

        array_1.swap(array_2);

        std::cout << "array_1 swapped" << std::endl;
        dump_array(array_1);

        std::cout << "array_2 swapped" << std::endl;
        dump_array(array_2);

        return 0;
    }
}

#endif //ARRAY_SWAP_H
