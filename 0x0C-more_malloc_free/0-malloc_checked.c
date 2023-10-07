#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocate memory with the malloc function
 * @b: number of bytes to be allocated
 *
 * Return: A pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
