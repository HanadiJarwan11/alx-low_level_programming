#include <stdio.h>
/**
 * main - letters except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'd'; n <= 'f'; n <= 'p'; n <= 'r'; n <= 'z' ; n++)
		putchar (n);
	putchar('\n');

	return (0);
}

