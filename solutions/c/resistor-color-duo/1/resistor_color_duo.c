#include "resistor_color_duo.h"
#include <stddef.h>

uint16_t color_code(const resistor_band_t *colors)
{
  // guard against null pointer
  // considering we expect at least 2 colors, 0 should be an invalid answer
  if (colors == NULL)
    return 0;

  return colors[0] * 10 + colors[1];
}
