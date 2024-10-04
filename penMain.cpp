#include <iostream>
#include "pen/Pen.hpp"

int main() {
    Pen pen;
    int symbols = pen.write("Hello, Santa!");

    std::cout << symbols << std::endl; // 13
    std::cout << pen << std::endl;

    return 0;
}
