#include <stdio.h>

/**
 * main - Sizes
 * Return: Always 0 (success)
 */
int main(void)
{
	char h;
	int a;
	long int n;
	long long int u;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(h));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(u));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
