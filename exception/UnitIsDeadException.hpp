#pragma once
#ifndef UNIT_IS_DEAD_EXCEPTION_HPP
#define UNIT_IS_DEAD_EXCEPTION_HPP

#include <iostream>

class UnitIsDeadException {
    std::string message;
public:
    UnitIsDeadException(const std::string& message);
    
    const std::string getMessage() const;
};

std::ostream& operator<<(std::ostream& out, const UnitIsDeadException& ex);

#endif //UNIT_IS_DEAD_EXCEPTION_HPP
