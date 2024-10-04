#pragma once
#ifndef CAR_HPP
#define CAR_HPP

#include "../location/Location.hpp"
#include <iostream>

class Car {
    private:
        std::string model;
        double tankCapacity;
        double fuelAmount;
        double mileage;
        double fuelConsumption;
        Location location;

    public:
        Car(const std::string& model, double tankCapacity, double fuelConsumption);

        const std::string& getModel() const;
        double getTankCapacity() const;
        double getFuelAmount() const;
        double getMileage() const;
        const Location& getLocation() const;
        void refuel(double fuel);
        void refuelUntilFull();
        void move(const Location& newLocation);
};

std::ostream& operator<<(std::ostream& out, const Car& car);

#endif //CAR_HPP
