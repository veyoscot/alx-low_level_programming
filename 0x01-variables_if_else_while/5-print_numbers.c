#include <stdio.h>
/**
 *main-program entry point.
 *Description: print single digit numbers
 *Return:0 no error, non zero if error
 */
int main(void)
{
	int n;

	for (n = 0; n <= 10; n++)
	{	
		printf("%d", n);
	}
	printf("\n");
	return (0);
}


