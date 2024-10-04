#pragma once
#ifndef OUT_OF_INK_EXCEPTION_HPP
#define OUT_OF_INK_EXCEPTION_HPP

#include <iostream>

class OutOfInkException {
    std::string message;
public:
    OutOfInkException(const std::string& message);
    
    const std::string getMessage() const;
};

std::ostream& operator<<(std::ostream& out, const OutOfInkException& ex);

#endif //OUT_OF_INK_EXCEPTION_HPP
