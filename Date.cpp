#include "Date.h"
#include <iostream>

namespace club
{
  //---------------------------------
  // Constructor
  Date::Date(unsigned short y, unsigned short mo, unsigned short d) : year(y), month(mo), day(d) {}
  //---------------------------------
  // Overloaded output operator
  std::ostream &operator<<(std::ostream &os, const club::Date &d)
  {
    os << d.month << "/" << d.day << "/" << d.year;
    return os;
  }
  //---------------------------------
  // Overloaded equality operator
  bool Date::operator==(const Date &d) const
  {
    return (year == d.getYear() && month == d.getMonth() && day == d.getDay());
  }
  //---------------------------------
  // Getters
  unsigned short Date::getYear() const
  {
    return year;
  }
  //---------------------------------
  unsigned short Date::getMonth() const
  {
    return month;
  }
  //---------------------------------
  unsigned short Date::getDay() const
  {
    return day;
  }
}