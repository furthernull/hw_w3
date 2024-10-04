#include <iostream>
#include "paper/Paper.hpp"

int main() {
    Paper paper;
    int symbols = paper.addContent("Hello, Santa!");

    std::cout << symbols << std::endl; // 13
    paper.show(); // Hello, Santa!

    std::cout << paper << std::endl;

    return 0;
}
