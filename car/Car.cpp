#include "Car.hpp"
#include "../exception/NotEnoughFuelException.hpp"
#include "../exception/NotEnoughTankCapacityException.hpp"

Car::Car(const std::string& model, double tankCapacity, double fuelConsumption) {
    this->model = model;
    this->tankCapacity = tankCapacity;
    this->fuelAmount = 0.0;
    this->mileage = 0.0;
    this->fuelConsumption = fuelConsumption;
    this->location = Location();
}

const std::string& Car::getModel() const {
    return model;
}

double Car::getTankCapacity() const {
    return tankCapacity;
}

double Car::getFuelAmount() const {
    return fuelAmount;
}

double Car::getMileage() const {
    return mileage;
}

const Location& Car::getLocation() const {
    return location;
}

void Car::refuel(double fuel) {
    if (this->fuelAmount + fuel > this->tankCapacity) {
        throw NotEnoughTankCapacityException("Not enough capacity...");
    }
    this->fuelAmount += fuel;
}

void Car::refuelUntilFull() {
    this->fuelAmount = this->tankCapacity;
}

void Car::move(const Location& newLocation) {
    double distance = this->location.distance(newLocation);
    double fuelNeeded = distance * fuelConsumption;

    if (fuelNeeded > fuelAmount) {
        throw NotEnoughFuelException("No fuel...");
    }
    mileage += distance;
    fuelAmount -= fuelNeeded;
    location = newLocation;
}


std::ostream& operator<<(std::ostream& out, const Car& car) {
    out << car.getModel() << ": " << std::endl;
    out << "  - fuel: " << car.getFuelAmount() << "/" << car.getTankCapacity() << std::endl;
    out << "  - mileage: " << car.getMileage() << std::endl;
    out << "  - location: " << car.getLocation() << std::endl;
    return out;
}
