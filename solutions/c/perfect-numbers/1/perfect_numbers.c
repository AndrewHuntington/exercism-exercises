#include "perfect_numbers.h"

kind classify_number(int n)
{
  if (n < 1)
    return ERROR;

  if (n == 1)
    return DEFICIENT_NUMBER;

  int sum = 1;

  for (int i = 2; i < n; i++)
  {
    if ((n % i) == 0)
    {
      sum += i;
    }
  }

  if (sum == n)
  {
    return PERFECT_NUMBER;
  }
  else if (sum > n)
  {
    return ABUNDANT_NUMBER;
  }
  else
  {
    return DEFICIENT_NUMBER;
  }
}
