#include <stdio.h>
#include <stdlib.h>
/**
 * main - stay positive
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	printf("enter your number\n");
	scanf("%d", &n);
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}

	else
	{
		printf("is negative\n");
	}
	return (0);
}
