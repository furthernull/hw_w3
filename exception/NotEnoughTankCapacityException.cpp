#include "NotEnoughTankCapacityException.hpp"

NotEnoughTankCapacityException::NotEnoughTankCapacityException(const std::string& message) {
    this->message = message;
}

const std::string& NotEnoughTankCapacityException::getMessage() const {
    return this->message;
}

std::ostream& operator<<(std::ostream& out, const NotEnoughTankCapacityException& ex) {
    out << ex.getMessage() << std::endl;
    return out;
}
