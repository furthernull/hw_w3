#include "Date.hpp"
#include "../exception/InvalidDateException.hpp"

Date::Date(int day, int month, int year) {
    this->validate(day, month, year);
    this->day = day;
    this->month = month;
    this->year = year;
}

Date::~Date() {}

void Date::validate(int day, int month, int year) {
    int days[] = {31, 28, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31};

    if ( year%400 == 0 || ( year%4 == 0 && year%100 != 0 ) ) {
        days[1] = 29;
    }

    if ( month < 1 || month > 12 ) {
        throw InvalidDateException("Month does not exist");
    }

    if ( day < 1 || day > days[month-1] ) {
        throw InvalidDateException("Day does not exist");
    }
}

int Date::getDay() const {
    return this->day;
}

int Date::getMonth() const {
    return this->month;
}

int Date::getYear() const {
    return this->year;
}

int Date::operator-(const Date& other) const {
    // your code here
    return -1;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
    if ( date.getDay()/10 == 0 ) {
        out << "0";
    }
    out << date.getDay() << ".";

    if ( date.getMonth()/10 == 0 ) {
        out << "0";
    }
    out << date.getMonth() << "." << date.getYear();
    return out;
}
