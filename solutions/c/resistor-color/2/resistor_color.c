#include "resistor_color.h"

int color_code(resistor_band_t color)
{
  return color;
}

const resistor_band_t *colors(void)
{
  static const resistor_band_t resistor_colors[10] = {COLORS};
  return resistor_colors;
}
