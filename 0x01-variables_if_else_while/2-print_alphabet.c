#include <stdio.h>

/**
 * main - prints all the alphabets in lowercase,
 * followed by a new line
 * Return: End of Programme (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
