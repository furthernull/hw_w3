#include "date/Date.hpp"
#include "exception/InvalidDateException.hpp"
#include <iostream>

int main() {
    Date start(24, 2, 2022);
    Date current(19, 9, 2024);
    int days = current - start;


    std::cout << start << std::endl; // 24.02.2024
    std::cout << current << std::endl; // 19.09.2024
    std::cout << days << std::endl; // 939

    return 0;
}
