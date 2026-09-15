#ifndef TIME_H
#define TIME_H
#include <iostream>

namespace club
{
  class Time
  {
  public:
    Time() = delete;
    Time(unsigned short h, unsigned short m, char a);
    friend std::ostream &operator<<(std::ostream &os, const Time &t);

  private:
    unsigned short hour;
    unsigned short minute;
  };
}
#endif // TIME_H