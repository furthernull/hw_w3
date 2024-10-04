#include "OutOfInkException.hpp"

OutOfInkException::OutOfInkException(const std::string& message) {
    this->message = message;
}
    
const std::string OutOfInkException::getMessage() const {
    return this->message;
}

std::ostream& operator<<(std::ostream& out, const OutOfInkException& ex) {
    out << ex.getMessage() << std::endl;
    return out;
}