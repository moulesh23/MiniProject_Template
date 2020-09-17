#include "check.h"

int check(int number)
{
  /* Return -1 for negative numbers */
  if(number < 0)
    return -1;

  /* Return 0 for 0 */
  if(number == 0)
    return 0;
   
  if(number>0)
	return 1;

}