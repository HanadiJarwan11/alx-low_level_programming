#include <stdio.h>
/**
 * main - combination of numbers and letters
 * Return: 0 (success)
 */
int main(void)
{
	char n;
	char l;

	for (n = '0'; n <= '9'; n++)
		putchar (n);
	for (l = 'a'; l <= 'f'; l++)
		putchar (l);
	putchar ('\n');

	return (0);
}
