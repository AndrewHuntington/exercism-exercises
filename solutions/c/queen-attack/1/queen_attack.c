#include "queen_attack.h"

#include <stdlib.h>

#define MAX_POSITION 7

attack_status_t can_attack(position_t queen_1, position_t queen_2)
{
  // queens are out of bounds
  if (queen_1.column > MAX_POSITION || queen_1.row > MAX_POSITION ||
      queen_2.column > MAX_POSITION || queen_2.row > MAX_POSITION)
    return INVALID_POSITION;

  // queens are occupying the same position
  if (queen_1.column == queen_2.column && queen_1.row == queen_2.row)
    return INVALID_POSITION;

  // if queens are on the same row or column, can attack
  if (queen_1.row == queen_2.row || queen_1.column == queen_2.column)
    return CAN_ATTACK;

  // check diagonals
  if (abs(queen_1.row - queen_2.row) == abs(queen_1.column - queen_2.column))
    return CAN_ATTACK;

  return CAN_NOT_ATTACK;
}
