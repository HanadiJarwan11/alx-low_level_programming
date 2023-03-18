#include <stdio.h>

/**
 * main - display alphabets
 * Return: 0 (success)
 */
int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		printf("%c", letters);
		letters++;
	}
	return (0);
}
