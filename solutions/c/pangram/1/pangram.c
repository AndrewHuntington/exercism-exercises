#include "pangram.h"
#include <ctype.h>
#include <string.h>

#define CHARS_IN_ALPHABET 26

bool is_pangram(const char *sentence)
{
  if (sentence == NULL || strlen(sentence) < CHARS_IN_ALPHABET)
    return false;

  int count = 0;
  char *alphabet = "abcdefghijklmnopqrstuvwxyz";

  for (size_t i = 0; i < strlen(alphabet); i++)
  {
    for (size_t j = 0; j < strlen(sentence); j++)
    {
      if (alphabet[i] == tolower(sentence[j]))
      {
        count++;
        break;
      }
    }
  }

  if (count == CHARS_IN_ALPHABET)
    return true;

  return false;
}
