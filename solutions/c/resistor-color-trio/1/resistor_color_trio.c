#include <math.h>
#include "resistor_color_trio.h"

resistor_value_t color_code(const resistor_band_t *colors)
{
    u_int64_t value = ((colors[0] * 10) + colors[1]) * pow(10, colors[2]);
    unit_t unit = OHMS;

    if (value >= 1000000000)
    {
        value /= 1000000000;
        unit = GIGAOHMS;
    }
    if (value >= 1000000)
    {
        value /= 1000000;
        unit = MEGAOHMS;
    }
    if (value >= 1000)
    {
        value /= 1000;
        unit = KILOOHMS;
    }

    resistor_value_t resistor_value;
    resistor_value.value = value;
    resistor_value.unit = unit;

    return resistor_value;
}
