#ifndef PEN_HPP
#define PEN_HPP

#include <iostream>

class Pen {
    private:
        int inkAmount;
        int inkCapacity;
    public:
        Pen(int inkCapacity=4096);

        int getInkAmount() const;
        int getInkCapacity() const;

        int write(const std::string& message);
        void refill();
};

std::ostream& operator<<(std::ostream& out, const Pen& pen);

#endif //PEN_HPP
