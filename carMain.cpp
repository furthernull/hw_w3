#include "car/Car.hpp"
#include "location/Location.hpp"
#include "exception/NotEnoughFuelException.hpp"
#include "exception/NotEnoughTankCapacityException.hpp"
#include <iostream>

int main() {
    Car toyota("Toyota", 60.0, 1.3);

    std::cout << toyota << std::endl;

// Toyota:
//   - fuel: 0/60
//   - mileage: 0
//   - location: (0, 0)

    toyota.refuel(30.0);
    std::cout << toyota << std::endl;

// Toyota:
//   - fuel: 30/60
//   - mileage: 0
//   - location: (0, 0)

    toyota.move(Location(10, 4));
    std::cout << toyota << std::endl;

// Toyota:
//   - fuel: 15.9986/60
//   - mileage: 10.7703
//   - location: (10, 4)

    toyota.move(Location());
    std::cout << toyota << std::endl;

// Toyota:
//   - fuel: 1.99714/60
//   - mileage: 21.5407
//   - location: (0, 0)

    try {
        toyota.move(Location(10, 8));
    } catch ( NotEnoughFuelException exc ) {
        std::cout << "Not enough fuel..." << std::endl;
    }

    try {
        toyota.refuel(100.0);
    } catch ( NotEnoughTankCapacityException exc ) {
        std::cout << "Not enough tank capacity..." << std::endl;
    }
    
    toyota.refuelUntilFull();
    std::cout << toyota << std::endl;

// Toyota:
//   - fuel: 60/60
//   - mileage: 21.5407
//   - location: (0, 0)

    return 0;
}