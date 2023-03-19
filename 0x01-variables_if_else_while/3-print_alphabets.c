#include <stdio.h>
/**
 * main - Printing capital and small letters
 * Return: 0 Always
 */
int main(void)
{
	char letters1;
	char letters2;

	for (letters1 = 'a'; letters1 <= 'z'; letters1++)
	{
		putchar (letters1);
	}
	for (letters2 = 'A'; letters2 <= 'Z'; letters2++)
	{
		putchar (letters2);
	}
	putchar ('\n');
	return (0);
}
