// second iteration - use strcat & make comparisons more explicit

#include "raindrops.h"
#include <stdio.h>
#include <string.h>

#define BUFFER_LENGTH 16 // from test file

void convert(char result[], int drops)
{
  // is not divisible by 3, 5, or 7
  if (drops % 3 != 0 && drops % 5 != 0 && drops % 7 != 0)
  {
    snprintf(result, BUFFER_LENGTH, "%d", drops);
    return;
  }

  result[0] = '\0'; // initialize empty string

  if (drops % 3 == 0)
    strcat(result, "Pling");
  if (drops % 5 == 0)
    strcat(result, "Plang");
  if (drops % 7 == 0)
    strcat(result, "Plong");
}
