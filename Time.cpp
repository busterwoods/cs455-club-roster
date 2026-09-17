#include "Time.h"
#include <iostream>

namespace club
{
  //---------------------------------
  // Constructor
  Time::Time(unsigned short h, unsigned short m, char a)
  {
    hour = 0;
    if (a == 'p' || a == 'P')
    {
      hour = 12;
    }
    hour += h;
    minute = m;
  }
  //---------------------------------
  // Overloaded output operator
  std::ostream &operator<<(std::ostream &os, const club::Time &t)
  {
    os << t.hour << ":" << t.minute;
    return os;
  }
  //---------------------------------
  // Overloaded equality operator
  bool Time::operator==(const Time &t) const
  {
    return (hour == t.getHour() && minute == t.getMinute());
  }
  //---------------------------------
  // Getters
  unsigned short Time::getHour() const
  {
    return hour;
  }
  //---------------------------------
  unsigned short Time::getMinute() const
  {
    return minute;
  }
}