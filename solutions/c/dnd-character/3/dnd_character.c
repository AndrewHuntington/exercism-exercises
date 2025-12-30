#include <stdlib.h>
#include "dnd_character.h"

int modifier(int score)
{
  int diff = score - 10;
  return diff >= 0 ? diff / 2 : (diff - 1) / 2;
}

int ability(void)
{
  const int upper_bound = 6;
  const int lower_bound = 1;
  const int rolls = 4;
  int lowest_roll = 6;
  int roll_total = 0;

  for (int i = 0; i < rolls; i++)
  {
    int current_roll = rand() % (upper_bound - lower_bound + 1) + lower_bound;

    if (lowest_roll > current_roll)
    {
      lowest_roll = current_roll;
    }
    roll_total += current_roll;
  }

  return roll_total - lowest_roll;
}

dnd_character_t make_dnd_character(void)
{
  dnd_character_t character;

  character.strength = ability();
  character.dexterity = ability();
  character.constitution = ability();
  character.intelligence = ability();
  character.wisdom = ability();
  character.charisma = ability();
  character.hitpoints = 10 + modifier(character.constitution);

  return character;
}
