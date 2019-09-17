//========================================================================
// pow-iter.c
//========================================================================
// Baseline implementation of the pow function

#include "pow-iter.h"
#include <stdio.h>

double pow_iter( double base, int exponent )
{
  //'''' ASSIGNMENT TASK '''''''''''''''''''''''''''''''''''''''''''''''''
  // Implement this function
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  double total = 1;
  if exponent == 0
  {
    return 1;
  } 
  else if exponent < 0
  {
    exponent = exponent * -1;
    for (int i=0; i<exponent; i=i+1)
    {
      total = total * base;
    }
    return (1/total);
  }
  else // exponent > 0
  {
    for (int i=0; i<exponent; i=i+1)
    {
      total = total * base;
    }
    return total;
  }
}

