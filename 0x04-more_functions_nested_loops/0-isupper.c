#include "main.h"
/**
 *main - entry point
 *Description: checks for uppercase character.
 *@c: The characters in ASCII code
 *Return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
