#include "Pen.hpp"
#include "../exception/OutOfInkException.hpp"


Pen::Pen(int inkCapacity) {
    this->inkAmount = inkCapacity;
    this->inkCapacity = inkCapacity;
}

int Pen::getInkAmount() const {
    return this->inkAmount;
}

int Pen::getInkCapacity() const {
    return this->inkCapacity;
}

int Pen::write(const std::string& message) {
    if ( this->inkAmount == 0 ) {
        throw OutOfInkException("Pen is empty...");
    }

    if ( this->inkAmount < message.size()) {
        int symbol = inkAmount;

        this->inkAmount = 0;
        return symbol;
    }
    inkAmount -= message.size();
    return message.size();
}

void Pen::refill() {
    this->inkAmount = this->inkCapacity;
}

std::ostream& operator<<(std::ostream& out, const Pen& pen) {
    out << "Ink amount: " << pen.getInkAmount() << std::endl;
    out << "Ink capacity: " << pen.getInkCapacity() << std::endl;
    return out;
}
