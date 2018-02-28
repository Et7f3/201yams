#ifndef PROB_YAMS_H_
#define PROB_YAMS_H_

#include "prob_yams2.h"
#include "math_util.h"
#include "math.h"
#include "stdio.h"

double prob_brelan(unsigned int first_num, unsigned int dice[5]);
double prob_yahtzee(unsigned int first_num, unsigned int dice[5]);
double prob_petite_suite(unsigned int first_num, unsigned int dice[5]);
double prob_grande_suite(unsigned int first_num, unsigned int dice[5]);
double prob_full(unsigned int first_num, unsigned int second_num,
  unsigned int dice[5]);

#endif
