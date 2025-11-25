#include "binary.h"
#include <string.h>

int convert(const char *input)
{
  // int n = strlen(input) - 1;
  int result_base10 = 0;

  // OLD
  // for (int i = 0; n >= 0; n--, i++)
  // {
  //   if (input[n] == '1')
  //   {
  //     result_base10 += (1 << i);
  //   }
  //   else if (input[n] != '0')
  //   {
  //     return INVALID;
  //   }
  // }

  // Suggested solution
  while (*input != '\0')
  {
    int bit = *input++ - '0';
    if (bit != 0 && bit != 1)
    {
      return INVALID;
    }
    result_base10 = 2 * result_base10 + bit;
  }

  return result_base10;
}
