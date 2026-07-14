#ifndef RESISTOR_COLOR_TRIO_H
#define RESISTOR_COLOR_TRIO_H

#include <stdio.h>
#include <stdint.h>

#define COLORS BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE
#define UNITS OHMS, KILOOHMS, MEGAOHMS, GIGAOHMS

typedef enum
{
    COLORS
} resistor_band_t;

typedef enum
{
    UNITS
} unit_t;

typedef struct
{
    uint64_t value;
    unit_t unit;

} resistor_value_t;

uint64_t power_of_ten(int exp);

resistor_value_t color_code(const resistor_band_t *colors);

#endif
