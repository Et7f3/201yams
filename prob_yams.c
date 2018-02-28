#include "prob_yams.h"
#include "prob_yams2.h"
#include "math_util.h"

double prob_brelan(unsigned int first_num, unsigned int dice[5])
{
  int h;
  h = how_many_in(dice, first_num);

  if ( h >= 3 )
    return (1);

  return (prob(5 - h, 3 - h) + prob(5 - h, 4 - h) + prob(5 - h, 5 - h));
}

double prob_yahtzee(unsigned int first_num, unsigned int dice[5])
{
  int h;
  h = how_many_in(dice, first_num);

  if ( h >= 3 )
    return (1);

  return (prob(5 - h, 5 - h));
}

double prob_petite_suite(unsigned int first_num, unsigned int dice[5])
{
  int h;
  h = !!how_many_in(dice, 3) + !!how_many_in(dice, 4);

  if ( 3 < first_num && first_num < 7 )
    first_num -= 3;

  if ( ( first_num == 1 || first_num == 2 ) && how_many_in(dice, 2) )
    h++;
  if ( ( first_num == 2 || first_num == 3 ) && how_many_in(dice, 5) )
    h++;
  if ( first_num == 1  && how_many_in(dice, 1) )
    h++;
  if ( first_num == 3 && how_many_in(dice, 6) )
    h++;
  if ( h > 4 )
    return (1);

  return ( factorial(5 - h) / pow(6.0, 4 - h) );
}

double prob_grande_suite(unsigned int first_num, unsigned int dice[5])
{
  int h;
  h = !!how_many_in(dice, 2) + !!how_many_in(dice, 3)
    + !!how_many_in(dice, 4) + !!how_many_in(dice, 5);

  if ( 4 < first_num && first_num < 7 )
    first_num -= 4;

  if ( first_num == 1  && how_many_in(dice, 1) )
    h++;
  if ( first_num == 3 && how_many_in(dice, 6) )
    h++;

  return ( factorial(5 - h) / pow(6.0, 5 - h) );
}

double prob_full(unsigned int first_num, unsigned int second_num,
  unsigned int dice[5])
{
  unsigned int first_die;
  unsigned int second_die;

  first_die  = how_many_in(dice, first_num);
  second_die = how_many_in(dice, second_num);

  if ( first_die > 3 )
    first_die = 3;
  if ( second_die > 2 )
    second_die = 2;

  return ( factorial(5 - first_die - second_die) /
   pow(6.0, 5 - first_die - second_die) );
}
