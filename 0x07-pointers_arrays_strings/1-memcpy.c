#include "main.h"

/**
 * *_memcpy - This function copies bytes from one memory are to another
 * @n: Functon copies
 * @src: bytes from memory area
 * @dest: Destinationation of the memory area
 * Return: Pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
