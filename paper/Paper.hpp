#ifndef PAPER_HPP
#define PAPER_HPP

#include <iostream>

class Paper {
    private:
        int maxSymbols;
        int symbols;
        std::string content;
    public:
        Paper(int maxSymbols=4096);

        int getMaxSymbols() const;
        int getSymbols() const;

        int addContent(const std::string& message);
        void show() const;
};

std::ostream& operator<<(std::ostream& out, const Paper& paper);

#endif //PAPER_HPP
