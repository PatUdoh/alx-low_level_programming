#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int i2
		long long int i3;
	char c;
	float f;

	printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(i2));
	printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(i3));
	printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(f));
	return (0);
i}
