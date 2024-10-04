#pragma once
#ifndef NOT_ENOUGH_FUEL_EXCEPTION_HPP
#define NOT_ENOUGH_FUEL_EXCEPTION_HPP

#include <iostream>

class NotEnoughFuelException {
private:
    std::string message;
public:
    NotEnoughFuelException(const std::string& message);
    const std::string& getMessage() const;    
};

std::ostream& operator<<(std::ostream& out, const NotEnoughFuelException& ex);

#endif //NOT_ENOUGH_FUEL_EXCEPTION_HPP
