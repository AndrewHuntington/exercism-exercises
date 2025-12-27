#include "perfect_numbers.h"
#include <math.h>

kind classify_number(int n)
{
  if (n < 1)
    return ERROR;

  if (n == 1)
    return DEFICIENT_NUMBER;

  int sum = 1;
  int sqrt_n = sqrt(n);

  for (int i = 2; i <= sqrt_n; i++)
  {
    if ((n % i) == 0)
    {
      sum += i;

      // Avoid double counting when i = sqrt(n)
      if (i != n / i)
        sum += n / i;
    }
  }

  if (sum == n)
    return PERFECT_NUMBER;

  if (sum > n)
    return ABUNDANT_NUMBER;

  return DEFICIENT_NUMBER;
}
