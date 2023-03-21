#include <stdio.h>
/**
 * main - possible combo of single digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int a, b, c;
	
	for (a = '0'; a <= '9'; a++)
	{
	for (b = '0'; b <= '9'; b++)
	{
	for (c = '0'; c <= '9'; c++)
	{
	if (a != b && a != c && b != c)
	{
		putchar (a + '0');
		putchar (b + '0');
		putchar (c + '0');
		putchar (' ');
	}
	}
        }
        }
        putchar ('\n');

        return (0);
}
