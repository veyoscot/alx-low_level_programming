#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
      {
           printf("The number is positive\n",n);
      }
      else if (n < 0)
      {
           printf("The number is negative\n",n);
      }
      else
      {
           printf("The number is zero\n",n);
      }
      return (0);
}
