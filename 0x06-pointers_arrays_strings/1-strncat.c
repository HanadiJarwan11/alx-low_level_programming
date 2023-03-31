#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * _strncat - it will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 * Return: nothing
 * @dest: is always null-terminated
 * @n: used as integer
 * @src: does not need to be null-terminated
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
