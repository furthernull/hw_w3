#ifndef DATE_HPP
#define DATE_HPP

#include <iostream>

class Date {
    private:
        int day;
        int month;
        int year;

        void validate(int day, int month, int year);
    public:
        Date(int day=1, int month=1, int year=1970);
        ~Date();

        int getDay() const;
        int getMonth() const;
        int getYear() const;
        int operator-(const Date& other) const;
};

std::ostream& operator<<(std::ostream& out, const Date& date);

#endif //DATE_HPP
