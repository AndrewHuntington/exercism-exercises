#include "leap.h"

bool leap_year(int year)
{
  if (!(year % 100))
  {
    if (year % 400)
      return false;
  }

  if (year % 4)
    return false;

  return true;
}
