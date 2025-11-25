#include "binary.h"
#include <string.h>

int convert(const char *input)
{
  int result = 0;

  while (*input)
  {
    int bit = *input++ - '0';
    if (bit != 0 && bit != 1)
    {
      return INVALID;
    }

    // Horner's method
    // base is 2 (binary)
    result = 2 * result + bit;
  }

  return result;
}
