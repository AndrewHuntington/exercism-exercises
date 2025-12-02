#include "eliuds_eggs.h"

int egg_count(unsigned int n)
{
  int eggs = 0;

  while (n)
  {
    if (n & 1)
      eggs++;

    n >>= 1;
  }

  return eggs;
}
