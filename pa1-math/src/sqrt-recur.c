//========================================================================
// sqrt-recur.c
//========================================================================
// Alternative implementation of the sqrt function

#include "sqrt-recur.h"
#include <stdio.h>
#include <limits.h> // for INT_MAX

int sqrt_find(int x, int min, int max)
{
  int d = min + ((max - min)/2);
  if (max - min) <= 2
  {
    if (max*max) <= x
    {
      return max;
    }
    else if ((min+1)*(min+1)) <= x
    {
      return (min + 1);
    }
    else //min*min <= x
    {
      return min;
    }
  }
  else if (d*d) > x
  {
    sqrt_find(x,min,d);
  }
  else if (d*d) < x
  {
    sqrt_find(x,d,max);
  }
  else // d*d == x
  {
    return d;
  }
}

int sqrt_recur( int x )
{
  //'''' ASSIGNMENT TASK '''''''''''''''''''''''''''''''''''''''''''''''''
  // Implement this function
  //
  // You may also create helper functions if needed
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  return sqrt_find(x,0,x);
}

