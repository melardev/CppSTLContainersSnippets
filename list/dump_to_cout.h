
#ifndef DUMP_TO_COUT_H
#define DUMP_TO_COUT_H

#include <list>
#include <iostream>
#include <iterator>

namespace ListDumpToStdOut {
    int main() {
        std::list<int> list_object{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        std::copy(list_object.cbegin(), list_object.cend(),
                  std::ostream_iterator<int>(std::cout, ", "));
        std::cout << std::endl;
    }
}
#endif //DUMP_TO_COUT_H
