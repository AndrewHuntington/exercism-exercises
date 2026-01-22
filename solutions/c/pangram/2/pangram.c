#include "pangram.h"
#include <ctype.h>
#include <stddef.h>
#include <stdint.h>

#define CHARS_IN_ALPHABET 26

bool is_pangram(const char *sentence)
{
  if (sentence == NULL)
    return false;

  const uint32_t pangram_mask = (1u << CHARS_IN_ALPHABET) - 1u;
  uint32_t visit_mask = 0u;

  for (const unsigned char *p = (const unsigned char *)sentence; *p != '\0';
       ++p)
  {
    if (isalpha(*p))
    {
      unsigned char c = (unsigned char)tolower(*p);
      uint32_t x = (uint32_t)(c - 'a');
      if (x < CHARS_IN_ALPHABET)
        visit_mask |= (1u << x);
    }

    if (visit_mask == pangram_mask)
      return true;
  }

  return visit_mask == pangram_mask;
}
