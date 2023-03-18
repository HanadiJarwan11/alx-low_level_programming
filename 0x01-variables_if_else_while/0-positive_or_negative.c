#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - stay positive
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

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
