#include "two_fer.h"
#include <stdio.h>

#define BUFFER_SIZE (100) // same as test file

void two_fer(char *buffer, const char *name)
{
  if (!name)
    snprintf(buffer, BUFFER_SIZE, "One for you, one for me.");
  else
    snprintf(buffer, BUFFER_SIZE, "One for %s, one for me.", name);
}
