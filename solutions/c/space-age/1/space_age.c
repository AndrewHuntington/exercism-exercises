#include "space_age.h"

#define EARTH_YEAR_IN_SECONDS 31557600
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

float age(planet_t planet, int64_t seconds)
{
  static const float orbital_periods[] = {
      0.2408467f,  // Mercury
      0.61519726f, // Venus
      1.0f,        // Earth
      1.8808158f,  // Mars
      11.862615f,  // Jupiter
      29.447498f,  // Saturn
      84.016846f,  // Uranus
      164.79132f   // Neptune
  };

  if (planet < 0 || planet >= ARRAY_SIZE(orbital_periods))
    return -1.0f;

  return seconds / (orbital_periods[planet] * EARTH_YEAR_IN_SECONDS);
}
