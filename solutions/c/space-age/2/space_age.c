#include "space_age.h"

#define EARTH_YEAR_IN_SECONDS 31557600
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

float age(planet_t planet, int64_t seconds)
{
  static const double planet_years_per_sec[] = {
      1.0 / (0.2408467 * EARTH_YEAR_IN_SECONDS),  // Mercury
      1.0 / (0.61519726 * EARTH_YEAR_IN_SECONDS), // Venus
      1.0 / EARTH_YEAR_IN_SECONDS,                // Earth
      1.0 / (1.8808158 * EARTH_YEAR_IN_SECONDS),  // Mars
      1.0 / (11.862615 * EARTH_YEAR_IN_SECONDS),  // Jupiter
      1.0 / (29.447498 * EARTH_YEAR_IN_SECONDS),  // Saturn
      1.0 / (84.016846 * EARTH_YEAR_IN_SECONDS),  // Uranus
      1.0 / (164.79132 * EARTH_YEAR_IN_SECONDS)   // Neptune
  };

  if (planet < 0 || planet >= ARRAY_SIZE(planet_years_per_sec))
    return -1.0f;

  return seconds * planet_years_per_sec[planet];
}
