#include "OutOfSpaceException.hpp"

OutOfSpaceException::OutOfSpaceException(const std::string& message) {
    this->message = message;
}
    
const std::string OutOfSpaceException::getMessage() const {
    return this->message;
}

std::ostream& operator<<(std::ostream& out, const OutOfSpaceException& ex) {
    out << ex.getMessage() << std::endl;
    return out;
}