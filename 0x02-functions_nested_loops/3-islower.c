#include "main.h"

/**
 *main - entry point
 *
 *Description: checks for alphabetic character
 *@c: is the char to be checked
 *
 *Return: 1 if char is lowercase, otherwise 0
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
