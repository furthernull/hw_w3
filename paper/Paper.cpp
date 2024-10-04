#include <string>
#include "Paper.hpp"
#include "../exception/OutOfSpaceException.hpp"

Paper::Paper(int maxSymbols) {
    this->maxSymbols = maxSymbols;
    this->symbols = 0;
}

int Paper::getMaxSymbols() const {
    return this->maxSymbols;
}

int Paper::getSymbols() const {
    return this->symbols;
}

int Paper::addContent(const std::string& message) {
    if ( this->symbols == this->maxSymbols ) {
        throw OutOfSpaceException("Not enough spase...");
    }

    int freeSymbols = this->maxSymbols - this->symbols;

    if ( message.size() > freeSymbols ) {
        this->content.append(message.substr(0, freeSymbols));
        this->symbols = this->maxSymbols;
        return freeSymbols;
    }
    this->content.append(message);
    this->symbols = content.size();
    return content.size();
}

void Paper::show() const {
    std::cout << this->content << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Paper& paper) {
    out << "Paper max symbols: " << paper.getMaxSymbols() << std::endl;
    out << "Paper contain " << paper.getSymbols() << " symbols" << std::endl;
    return out;
}
