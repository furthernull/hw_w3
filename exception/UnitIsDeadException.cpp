#include "UnitIsDeadException.hpp"

UnitIsDeadException::UnitIsDeadException(const std::string& message) {
    this->message = message;
}
    
const std::string UnitIsDeadException::getMessage() const {
    return this->message;
}

std::ostream& operator<<(std::ostream& out, const UnitIsDeadException& ex) {
    out << ex.getMessage() << std::endl;
    return out;
}
