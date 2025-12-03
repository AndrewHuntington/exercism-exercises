#include "eliuds_eggs.h"

int egg_count(unsigned int n)
{
  int eggs = 0;

  while (n)
  {
    // using Brian Kernighan’s algorithm
    n &= (n - 1);
    eggs++;
  }

  return eggs;
}
