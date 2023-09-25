#include "main.h"

/**
 * *_memset - Fills the memory with a constant  byte
 * @s: Memory area to be filled
 * @b: character to be  copied
 * @n: Number of times to copy the characters
 *
 * Return: pointer to the memory area
 */
char  *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
