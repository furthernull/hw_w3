#include "NotEnoughFuelException.hpp"

NotEnoughFuelException::NotEnoughFuelException(const std::string& message) {
    this->message = message;
}

const std::string& NotEnoughFuelException::getMessage() const {
    return this->message;
}

std::ostream& operator<<(std::ostream& out, const NotEnoughFuelException& ex) {
    out << ex.getMessage() << std::endl;
    return out;
}
