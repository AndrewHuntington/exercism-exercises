#include "darts.h"

#define OUTER_RADIUS_SQ 100
#define MID_RADIUS_SQ 25
#define INNER_RADIUS_SQ 1

uint8_t score(coordinate_t landing_position)
{
  float x = landing_position[0];
  float y = landing_position[1];
  float sum_x_sq_y_sq = x * x + y * y;

  // check if target missed
  if (sum_x_sq_y_sq > OUTER_RADIUS_SQ)
    return 0;

  // check if dart hits inner circle
  if (sum_x_sq_y_sq <= INNER_RADIUS_SQ)
    return 10;

  // check if dart hits middle circle
  if (sum_x_sq_y_sq <= MID_RADIUS_SQ)
    return 5;

  // dart hit inside the outer circle
  return 1;
}
