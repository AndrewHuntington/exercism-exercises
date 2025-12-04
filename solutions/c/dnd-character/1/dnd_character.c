#include <stdlib.h>
#include <time.h>
#include "dnd_character.h"

int modifier(int score)
{
  return (score - 10) >> 1;
}

int ability(void)
{
  srand(time(NULL));
  int upper_bound = 6;
  int lower_bound = 1;
  int current_roll = 0;
  int lowest_roll = 0;
  int roll_total = 0;

  for (int i = 0; i < 4; i++)
  {
    current_roll = rand() % (upper_bound - lower_bound + 1) + lower_bound;

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
