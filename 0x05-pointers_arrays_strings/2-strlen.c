#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char to check the length string to evaluate
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0; /*strat the counter from 0*/

	for (; *s++;)
		i++;
	return (i);
}
