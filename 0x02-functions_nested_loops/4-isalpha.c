#include "main.h"

/**
 * _islower - check if char is uppercase or lowercase
 * @c: is the char to be checked
 * Return: 1 if char is uppercase or lowercase, otherwise 0.
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
