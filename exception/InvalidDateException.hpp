#pragma once
#ifndef INVALID_DATE_EXCEPTION_HPP
#define INVALID_DATE_EXCEPTION_HPP

#include <iostream>

class InvalidDateException {
private:
    std::string message;
public:
    InvalidDateException(const std::string& message);
    const std::string& getMessage() const;
};

std::ostream& operator<<(std::ostream& out, const InvalidDateException& ex);

#endif //INVALID_DATE_EXCEPTION_HPP
