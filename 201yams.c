/*
** EPITECH PROJECT, 2018
** 201yams
** File description:
** 201yams
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "math_util.h"
#include "prob_yams.h"
#include "prob_yams2.h"

double eval_yams(char * type, unsigned int first_num, unsigned int second_num,
  unsigned int dice[5])
{
  double ret;
  if ( !strcmp(type, "paire") )
    ret = prob_paire(first_num, dice);
  else if ( !strcmp(type, "brelan") )
    ret = prob_brelan(first_num, dice);
  else if ( !strcmp(type, "yahtzee") )
    ret = prob_yahtzee(first_num, dice);
  else if ( !strcmp(type, "petite_suite") )
    ret = prob_petite_suite(first_num, dice);
  else if ( !strcmp(type, "grande_suite") )
    ret = prob_grande_suite(first_num, dice);
  else if ( !strcmp(type, "full") )
    ret = prob_full(first_num, second_num, dice);
  else if ( !strcmp(type, "carre") )
    ret = prob_carre(first_num, dice);
  else
    printf("Combinaison non reconnue."), exit(84);

  return (ret * 100);
}

int eval_arg_1_6(char * av[6], unsigned int dice[5])
{
  int i;
  for (i = 1; i < 6; i++)
  {
    if ( '0' <= av[i][0] && av[i][0] <= '6' && !av[i][1] )
      dice[i - 1] = av[i][0] - 0x30;
    else
      return (1);
  }

  return (0);
}

int     eval_arg_7(char * type, unsigned int *fn, unsigned int *sn)
{
  char *c;

  for (c = type; *(c + 1) && ('9' < *(c + 1) || *(c + 1) < '0'); c++)
  {
    if ( 'A' <= *c && *c <= 'Z' )
      *c = *c - 0x20;
    if ( *c != '_' && ( 'z' < *c || *c < 'a' ) )
      return (1);
  }
  *c++ = '\0';

  *fn = *c++ - 0x30;
  if ( *c == '_' )
    *sn = *(c+1) - 0x30;
  else
    *sn = 0;
  if ( *fn < 1 || *fn > 6 || *sn > 6 )
    return (1);

  return (0);
}

int     main(int ac, char **av)
{
  char * type;
  unsigned int first_num;
  unsigned int second_num;
  unsigned int dice[5];
  type = NULL;
  first_num = 0;
  second_num = 0;
  if ( ac == 7
      && (type = av[6])
      && !eval_arg_7(type, &first_num, &second_num)
      && !eval_arg_1_6(av, dice) )
    printf("%.2f%% is the probability for %s_%u%c%u",
    eval_yams(type, first_num, second_num, dice), type, first_num,
    second_num ? '_' : '\0', second_num);
  else
    return (84);
  return (0);
        (void)av;

//brelan de 3 avec 2 dés               printf("%.2f\n", prob(3,1) + prob(3,2) + prob(3,3));

//brelan de 3 avec 1 dés       printf("%.2f\n", prob(4,2) + prob(4,3) + prob(4,4));

//brelan de 3 avec aucun dés   printf("%.2f\n", prob(5,3) + prob(5,4) + prob(5,5));

        if (ac > 6)
        {
//              printf("YAMS - chances to get a %s: %.2f%%\n", split_arg(av[6]), split_action(av, 3));
        //        printf("YAMS - chances to get a %s: %.2f%%\n", split_arg(av[6]), prob(5, 3));
        }
        else
                return (84);
        return (0);
}
