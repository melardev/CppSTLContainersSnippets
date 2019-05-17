#ifndef LIST_FIND_TEMPLATE_H
#define LIST_FIND_TEMPLATE_H

#include <iostream>
#include <list>
#include <string>
#include <algorithm>

namespace ListFindTemplateBasedUtil {


    template<typename T>
    bool contains(std::list<T> &list_object, const T &element) {
        // find will return an iterator
        auto it = std::find(list_object.cbegin(), list_object.cend(), element);

        // if element was not found then it will be the same as list_object.cend() or list_object.end()
        // they both work as proven here below
        return it != list_object.end();
    }

    int main() {
        std::list<int> numbers_list = {0, 1, 2, 3, 4, 5, 6};

        std::cout << "Numbers list contents" << std::endl;
        std::list<int, std::allocator<int>>::const_iterator c_it = numbers_list.cbegin();
        while (c_it != numbers_list.cend()) {
            std::cout << *c_it << ", ";
            c_it++;
        }
        std::cout << std::endl << std::endl;

        int search_for_int = 5;
        bool found = contains(numbers_list, search_for_int);
        if (found)
            std::cout << search_for_int << " was found =)" << std::endl;
        else
            std::cout << search_for_int << " was not found =(" << std::endl;

        search_for_int = 7;
        found = contains(numbers_list, search_for_int);
        if (found)
            std::cout << search_for_int << " was found =)" << std::endl;
        else
            std::cout << search_for_int << " was not found =(" << std::endl;

        std::cout << std::endl << std::endl;

        std::list<std::string> strings_list =
                {"Cpp", "Java", "Python"};

        std::cout << "String list contents" << std::endl;
        std::list<std::string, std::allocator<std::string>>::const_iterator string_iterator = strings_list.cbegin();
        while (string_iterator != strings_list.cend()) {
            std::cout << *string_iterator << ", ";
            string_iterator++;
        }
        std::cout << std::endl << std::endl;

        std::string search_for_string = "Cpp";
        found = contains(strings_list, search_for_string);

        if (found)
            std::cout << search_for_string << " was found =)" << std::endl;
        else
            std::cout << search_for_string << " was not found =(" << std::endl;

        search_for_string = "Ruby";
        found = contains(strings_list, search_for_string);
        if (found)
            std::cout << search_for_string << " was found =)" << std::endl;
        else
            std::cout << search_for_string << " was not found =(" << std::endl;
    }
}
#endif //LIST_FIND_TEMPLATE_H
