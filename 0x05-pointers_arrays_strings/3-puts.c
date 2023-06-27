#include "main.h"
/**
 * _puts - unction that prints a string, followed by a new line, to stdout
 * @str: pointer to the string
 * Return: Always zero
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
