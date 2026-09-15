#include "Date.h"
#include <iostream>

namespace club
{
  Date::Date(unsigned short y, unsigned short mo, unsigned short d) : year(y), month(mo), day(d) {}

  std::ostream &operator<<(std::ostream &os, const club::Date &d)
  {
    os << d.month << "/" << d.day << "/" << d.year;
    return os;
  }
}