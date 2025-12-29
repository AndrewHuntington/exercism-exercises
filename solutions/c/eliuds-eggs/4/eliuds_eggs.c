#include "eliuds_eggs.h"

int egg_count(unsigned int n)
{
  // using popcnt
  return __builtin_popcount(n);
}
