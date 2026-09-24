// Class Time:
// Used to hold and print information for an hour and minute time.
#ifndef TIME_H
#define TIME_H
#include <iostream>

namespace club
{
  class Time
  {
  public:
    unsigned short minute;
    Time() = delete;
    Time(unsigned short h, unsigned short m, char a);
    bool operator==(const Time &t) const;
    friend std::ostream &operator<<(std::ostream &os, const Time &t);
    unsigned short getHour() const;
    unsigned short getMinute() const;

  private:
    unsigned short hour;
  };
}
#endif // TIME_H
