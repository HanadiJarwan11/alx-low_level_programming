#include <stdio.h>
/**
 * main - possible combo of three digits
 * Return:0 (success)
 */
int main(void)

{
	int x = 0;

	while (x < 99);

	{
		putchar (x + '0');
		if (x < 10)
		{
			putchar (',');
			putchar (x / 10 + '0');
			putchar (' ');
			x++;
		}
		putchar ('\n');

		return (0);
}
