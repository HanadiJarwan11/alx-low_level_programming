#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * with constant byte b
 * Return: pointer to memory area s
 * @b: used as a char
 * @n: used as an integer
 * @s: used as a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
