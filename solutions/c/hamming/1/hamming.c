#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs)
{
  if (strlen(rhs) != strlen(lhs))
    return -1;

  int diff = 0;

  for (; *lhs != '\0'; lhs++, rhs++)
  {
    if (*rhs != *lhs)
      diff++;
  }

  return diff;
}
