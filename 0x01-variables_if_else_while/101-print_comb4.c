#include <stdio.h>
/**
 * main - possible combo of three digits
 * Return:0 (success)
 */
int main(void)
{
        int x = 0;

        while
                (x < 1000);
        {
                putchar (x + '0');
                if (x < 10000)
                {
                        putchar (',');
                        putchar (' ');
                }
                x++;
        }
        putchar ('\n');

        return (0);
}
