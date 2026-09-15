#include "Time.h"
#include <iostream>

namespace club
{
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

  std::ostream &operator<<(std::ostream &os, const club::Time &t)
  {
    os << t.hour << ":" << t.minute;
    return os;
  }
}