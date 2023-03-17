#include <stdio.h>
/**
 * main - Prints size of types 
 * return 0
 */
int main(void)
{
int intType;
char charType;
long int longInt;
long long int LOT;
float floatType;
printf("Size of a char: %zu byte(s)\n", sizeof(charType));	 
printf("Size an int: %zu byte(s)\n", sizeof(intType));
printf("size of long int: %zu byte(s)\n", sizeof(longInt));
printf("size of long long int: %zu byte(s)\n", sizeof(LOT));
printf("size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
