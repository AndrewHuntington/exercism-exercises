#include <math.h>
#include "resistor_color_trio.h"

uint64_t power_of_ten(int exp)
{
    uint64_t sum = 1;
    for (; exp--;)
        sum *= 10;

    return sum;
}

resistor_value_t color_code(const resistor_band_t *colors)
{
    uint64_t value = ((colors[0] * 10) + colors[1]) * power_of_ten(colors[2]);

    if (value >= 1000000000)
    {
        return (resistor_value_t){value /= 1000000000, GIGAOHMS};
    }
    if (value >= 1000000)
    {
        return (resistor_value_t){value /= 1000000, MEGAOHMS};
    }
    if (value >= 1000)
    {
        return (resistor_value_t){value /= 1000, KILOOHMS};
    }

    return (resistor_value_t){value, OHMS};
}
