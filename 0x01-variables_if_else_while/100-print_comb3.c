#include <stdio.h>
/**
 * main - possible combo of two digits
 * Return:0 (success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; a <= 9; b++)
		{
			if (a != b)
			{
				putchar (a + '0');
				putchar (b + '0');
				putchar (' ');
			}
		}
	}
	putchar ('\n');

	return (0);
}
