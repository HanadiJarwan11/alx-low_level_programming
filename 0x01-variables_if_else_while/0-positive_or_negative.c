#include <stdio.h>
#include <stdlib.h>
/**
 * main - stay positive
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	if (n > 0)
	{
		printf("is positive%d\n", n);
		scanf("%d", n);
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}

	else
		(n < 0);
	{
		printf("is negative\n");
	}
	return (0);
}
