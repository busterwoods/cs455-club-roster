#ifndef DATE_H
#define DATE_H
#include <iostream>

namespace club
{
  class Date
  {
  public:
    Date() = delete;
    Date(unsigned short y, unsigned short mo, unsigned short d);
    friend std::ostream &operator<<(std::ostream &os, const Date &d);

  private:
    unsigned short year;
    unsigned short month;
    unsigned short day;
  };
}
#endif // DATE_H