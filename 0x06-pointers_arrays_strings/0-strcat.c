#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * _strcat - appends the src string to the dest string
 * overwriting the terminating null byte ('\0') at the end of dest
 * then adds a terminating null byte
 * @dest: is always null-terminated
 * @src: does not need to be null-terminated
 * ends result string with the null character
 * Return: nothing
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
