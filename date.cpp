#include "date.hpp"
#include <string>

using namespace std;

Date::Date(int year, int month, int day)
{
    year_ = year;
    month_ = month;
    day_ = day;
}

std::string Date::getString(){
    string output = "";
    output += to_string(year_) + " " + to_string(month_) + " " + to_string(day_) + " ";
    return output;
}