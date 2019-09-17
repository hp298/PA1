//========================================================================
// pow-recur.c
//========================================================================
// Alternative implementation of the pow function

#include "pow-recur.h"
#include <stdio.h>

double pow_recur( double base, int exponent )
{
  //'''' ASSIGNMENT TASK '''''''''''''''''''''''''''''''''''''''''''''''''
  // Implement this function
  //
  // You may also create helper functions if needed
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  if exponent == 0
  {
    return 1;
  }
  else if (exponent > 0)
  {
    if ((exponent % 2)==0) //even
    {
      return pow_recur(base,(2*exponent));
    }
    else //odd
    {
      return (base * pow_recur(base,(exponent - 1)));
    }
  }
  else // exponent < 0
  {
    return (1/(pow_recur(base, (exponent * -1))));
  }
}

