#include <stdio.h>
/**
 * main - possible combo of single digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	while (n = '0'; n <= '9'; n++)
	{
		putchar (n + '0');
		if (n < 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
