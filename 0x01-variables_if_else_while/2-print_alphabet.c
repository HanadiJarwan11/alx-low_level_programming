#include <stdio.h>

/**
 * main - display alphabets
 * Return: 0 (success)
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		putchar (letters);
		putchar ('\n');

	return (0);
}
