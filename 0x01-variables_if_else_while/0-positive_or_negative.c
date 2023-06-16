#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*if(n > 0) {
   /* if condition is true then print the following*/
	 printf("The number stored in the variable n is positive" );
} else if( n < 0) {
   /* if condition is true then print the following */
	printf("The number stored in the variable n is negative" );
} else if(n = 0) {
   /* if condition is true */
	printf("The number stored in the variable n is 0" );

	return (0);
}
