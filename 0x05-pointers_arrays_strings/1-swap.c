#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: first integer
 * @b: second interger
 * Return: Always zero
 */
void swap_int(int *a, int *b)
{
int change;
change = *a;
*a = *b;
*b = change;
}
