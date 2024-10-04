#pragma once
#ifndef NOT_ENOUGH_TANK_CAPACITY_EXCEPTION_HPP
#define NOT_ENOUGH_TANK_CAPACITY_EXCEPTION_HPP

#include <iostream>

class NotEnoughTankCapacityException {
private:
    std::string message;
public:
    NotEnoughTankCapacityException(const std::string& message);
    const std::string& getMessage() const;    
};

std::ostream& operator<<(std::ostream& out, const NotEnoughTankCapacityException& ex);

#endif //NOT_ENOUGH_TANK_CAPACITY_EXCEPTION_HPP
