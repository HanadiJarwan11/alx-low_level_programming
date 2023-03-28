#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
	{
		*n = 402;
	}
int main(void)
{
	int a;
	int *s;

	a = 98;
	s = &a;
	printf("n=%d\n", a);
	modif_my_param(s);
	printf("n=%d\n", a);
		return (0);
}
