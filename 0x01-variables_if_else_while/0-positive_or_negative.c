#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Determine positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("The number is positive\n", n);
}
else if (n == 0)
{
printf("The number is zero\n", n);
}
else
{
printf("The number is negative\n", n);
}
return (0);
}
