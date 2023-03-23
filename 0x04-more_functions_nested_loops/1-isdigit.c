#include "main.h"
/**
 * main - checking digits from zero to nine
 * Return 1 if c is digit
 * Return: 0 otherwise
 * checks for a digit (0 through 9)
 * main.c file is for compilation
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
