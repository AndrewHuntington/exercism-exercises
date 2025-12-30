#include "perfect_numbers.h"
#include <math.h>
#include <stdlib.h>

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
    div_t d = div(n, i); // Get n/i and n%i
    if (d.rem == 0)
      sum += i + d.quot;
  }
  // Remove double counting if any
  if (sqrt_n * sqrt_n == n)
    sum -= sqrt_n;

  if (sum == n)
    return PERFECT_NUMBER;

  if (sum > n)
    return ABUNDANT_NUMBER;

  return DEFICIENT_NUMBER;
}
