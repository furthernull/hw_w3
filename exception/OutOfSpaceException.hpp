#pragma once
#ifndef OUT_OF_SPACE_EXCEPTION_HPP
#define OUT_OF_SPACE_EXCEPTION_HPP

#include <iostream>

class OutOfSpaceException {
    std::string message;
public:
    OutOfSpaceException(const std::string& message);
    
    const std::string getMessage() const;
};

std::ostream& operator<<(std::ostream& out, const OutOfSpaceException& ex);

#endif //OUT_OF_SPACE_EXCEPTION_HPP
