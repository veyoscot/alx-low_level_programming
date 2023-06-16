#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet  = 'a';
        while (alphabet <= 'Z')	
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}


