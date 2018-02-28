#include "math_util.h"
#include "math.h"
#include "stdio.h"

double  factorial(unsigned int n)
{
        if (n == 0 || n == 1)
                return (1);
        return (n * factorial(n - 1));
}

double  binomialCoefficient(int n, int k)
{
        return (factorial(n) / (factorial(n - k) * factorial(k)));
}

double   prob(int n, int k)
{
        return (binomialCoefficient(n, k) * pow(1.0 / 6.0, k) * pow(5.0 / 6.0, n - k));
}

unsigned int     how_many_in(unsigned int dice[5], unsigned int of)
{
  unsigned int h;
  int i;

  h = 0;
  for (i = 0; i < 5; i++)
  {
    if ( dice[i] == of )
      h++;
  }

  return (h);
}
