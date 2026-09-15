#include "DateTime.h"
#include <iostream>

namespace club
{
  // Constructor
  DateTime::DateTime(Date d, Time t) : date(d), time(t) {};

  // Overloaded output operator
  std::ostream &operator<<(std::ostream &os, const club::DateTime &dt)
  {
    os << dt.date << ", " << dt.time;
    return os;
  }
}