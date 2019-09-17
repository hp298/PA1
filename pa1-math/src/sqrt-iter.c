//========================================================================
// sqrt-iter.c
//========================================================================
// Baseline implementation of the sqrt function

#include "sqrt-iter.h"
#include <stdio.h>
#include <limits.h> // for INT_MAX

int sqrt_iter( int x )
{
  //'''' ASSIGNMENT TASK '''''''''''''''''''''''''''''''''''''''''''''''''
  // Implement this function
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

  for (int i=0; i<x; i=i+1)
  {
    if ((i*i) > x)
    {
      return (i - 1);
    }
    else if ((i*i) == x)
    {
      return i;
    }
  }
  return 0;
}

