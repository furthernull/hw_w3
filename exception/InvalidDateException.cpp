#include "InvalidDateException.hpp"

InvalidDateException::InvalidDateException(const std::string& message) {
    this->message = message;
}

const std::string& InvalidDateException::getMessage() const {
    return this->message;
}

std::ostream& operator<<(std::ostream& out, const InvalidDateException& ex) {
    out << ex.getMessage() << std::endl;
    return out;
}
