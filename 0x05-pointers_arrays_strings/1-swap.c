#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: first integer to be swaped
 * @b: second integer to be swaped
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
