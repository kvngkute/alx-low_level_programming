#include <stdlib.h>
#include "main.h"

/**
 * *_memset - Fills the memory with a byte
 * @s: Memory to be filled
 * @b: character to be copied
 * @n: number of times to copy the character
 *
 * Return: Pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * *_calloc -  Allocates memmory to an array
 * @nmemb: number of elements in the array
 * @size: size of each value in the array
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
