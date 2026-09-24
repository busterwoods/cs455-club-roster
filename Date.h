// Class Date
// Used to hold and print information on a day, month, and year.
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
    bool operator==(const Date &d) const;
    friend std::ostream &operator<<(std::ostream &os, const Date &d);
    unsigned short getYear() const;
    unsigned short getMonth() const;
    unsigned short getDay() const;

  private:
    unsigned short year;
    unsigned short month;
    unsigned short day;
  };
}
#endif // DATE_H
