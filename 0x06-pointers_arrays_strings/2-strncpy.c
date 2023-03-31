#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * _strncpy - copies the string pointed to by src
 * including the terminating null byte
 * at most n bytes of src are copied
 * @n: used as an integer
 * @dest: is always null-terminated
 * @src: does not need to be null_terminated
 * Return: nothing
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (0);
}
