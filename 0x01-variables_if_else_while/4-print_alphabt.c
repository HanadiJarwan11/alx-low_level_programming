#include <stdio.h>
/**
 * main - letters except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		if (n != 'e' && n != 'q')
		putchar (n);
	putchar('\n');

	return (0);
}

