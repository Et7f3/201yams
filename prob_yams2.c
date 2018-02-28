#include "prob_yams.h"
#include "prob_yams2.h"
#include "math_util.h"

double prob_carre(unsigned int first_num, unsigned int dice[5])
{
  int h;
  h = how_many_in(dice, first_num);

  if ( h >= 3 )
    return (1);

  return (prob(5 - h, 4 - h) + prob(5 - h, 5 - h));
}

double prob_paire(unsigned int first_num, unsigned int dice[5])
{
  int h;
  h = how_many_in(dice, first_num);

  if ( h >= 2 )
    return (1);

  return (prob(5 - h, 2 - h) + prob(5 - h, 3 - h) + prob(5 - h, 4 - h) + prob(5 - h, 5 - h));
}
