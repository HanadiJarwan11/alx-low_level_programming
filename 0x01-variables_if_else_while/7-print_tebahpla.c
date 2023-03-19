#include <stdio.h>
/**
 * main - create lowercase backwards
 * Return: 0 (success)
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	putchar (l);
	putchar ('\n');

	return (0);
}
