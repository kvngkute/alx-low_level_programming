#include "function_pointers.h"
include <stdio.h>

/**
 * array_iterator - Prints out an array element on a newline
 * @array: array to print
 * @size: number of element to print
 * @action: The pointer to print
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
