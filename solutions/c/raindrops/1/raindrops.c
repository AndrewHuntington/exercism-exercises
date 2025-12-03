// first iteration

#include "raindrops.h"
#include <stdio.h>

#define BUFFER_LENGTH 16 // from test file

void convert(char result[], int drops)
{
  // is not divisible by 3, 5, or 7
  if (drops % 3 && drops % 5 && drops % 7)
  {
    snprintf(result, BUFFER_LENGTH, "%d", drops);
    return;
  }

  char *pling = "";
  char *plang = "";
  char *plong = "";

  if (!(drops % 3))
    pling = "Pling";
  if (!(drops % 5))
    plang = "Plang";
  if (!(drops % 7))
    plong = "Plong";

  snprintf(result, BUFFER_LENGTH, "%s%s%s", pling, plang, plong);
}
