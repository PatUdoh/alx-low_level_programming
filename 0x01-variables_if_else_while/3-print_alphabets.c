#include <stdio.h>

/**
 * main - prints alphabets in lowercase and uppercase,
 * followed by a new line
 * Return: End of programme (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
