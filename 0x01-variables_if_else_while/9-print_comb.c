#include <stdio.h>
/**
 * main - possible combo of single digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar (x + '0');
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar ('\n');

	return (0);
}
