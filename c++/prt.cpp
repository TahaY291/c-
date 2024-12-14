#include <iostream>

class Date {
private:
    int day, month, year;
    static Date defaultDate;

public:
    void setDefaultDate(int aDay, int aMonth, int aYear);
    void setDay(int aDay);
    int getDay() const;
    void addDay(int x);
    void setMonth(int aMonth);
    int getMonth() const;
    void addMonth(int x);
    void setYear(int aYear);
    int getYear() const;
    void addYear(int x);
    bool leapYear(int x) const;
    Date(int aDay, int aMonth, int aYear);
    void setDate(int aDay, int aMonth, int aYear);
    ~Date(); // Destructor
};

Date Date::defaultDate(7, 3, 2005);

Date::Date(int aDay, int aMonth, int aYear) {
    if (aDay == 0) {
        this->day = defaultDate.day;
    } else {
        setDay(aDay);
    }

    if (aMonth == 0) {
        this->month = defaultDate.month;
    } else {
        setMonth(aMonth);
    }

    if (aYear == 0) {
        this->year = defaultDate.year;
    } else {
        setYear(aYear);
    }
}

void Date::setMonth(int a) {
    if (a > 0 && a <= 12) {
        month = a;
    }
}

int Date::getMonth() const {
    return month;
}

void Date::addYear(int x) {
    year += x;
    if (day == 29 && month == 2 && !leapYear(year)) {
        day = 1;
        month = 3;
    }
}

bool Date::leapYear(int x) const {
    return (x % 4 == 0 && x % 100 != 0) || (x % 400 == 0);
}

void Date::setYear(int aYear) {
    year = aYear;
}

void Date::setDay(int aDay) {
    day = aDay;
}

void Date::setDate(int aDay, int aMonth, int aYear) {
    setDay(aDay);
    setMonth(aMonth);
    setYear(aYear);
    std::cout << day << "/" << month << "/" << year << std::endl;
}

Date::~Date() {
    std::cout << "Date destructor" << std::endl;
}

int main() {
    Date aDate(0, 0, 0);
    aDate.setDate(20, 10, 2011);

    // Remove the system("pause") for more portable code
    return 0;
}

