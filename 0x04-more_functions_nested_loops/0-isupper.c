#include "main.h"
/**
 * main - function that checks uppercase charaacters
 * Return 1 if c is uppercase return 0 if otherwise
 * int
 * _isupper - checks for an uppercase letter.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
