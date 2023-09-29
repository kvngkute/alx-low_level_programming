#include "main.h"
/**
 * _strlen_recursion - Calculates the length of a string
 * @s: The string to calculated
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (longit);
}
