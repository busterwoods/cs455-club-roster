
#ifndef DATETIME_H
#define DATETIME_H
#include <iostream>
#include "Date.h"
#include "Time.h"

namespace club
{
  class DateTime
  {
  public:
    DateTime() = delete;
    DateTime(Date d, Time t);
    friend std::ostream &operator<<(std::ostream &os, const DateTime &d);
    Date getDate() const;
    Time getTime() const;

  private:
    Date date;
    Time time;
  };
}
#endif // DATETIME_H