#ifndef DATE_HPP
#define DATE_HPP

#include <string>

class Date
{
private:
    int year_;
    int month_;
    int day_;
public:
    Date(int year, int month, int day);
    std::string getString();
};

#endif // DATE_HPP