#include <iostream>
#include "exception/UnitIsDeadException.hpp"
#include "unit/Unit.hpp"

int main() {
    Unit knight("Knight", 100, 20);
    Unit barbarian("Barbarian", 80, 30);

    std::cout << knight << std::endl; // Knight:: hp(100/100), dmg(20)
    std::cout << barbarian << std::endl; // Barbarian:: hp(80/80), dmg(30)

    knight.attack(barbarian);

    std::cout << knight << std::endl; // Knight:: hp(85/100), dmg(20)
    std::cout << barbarian << std::endl; // Barbarian:: hp(60/80), dmg(30)

    return 0;
}
