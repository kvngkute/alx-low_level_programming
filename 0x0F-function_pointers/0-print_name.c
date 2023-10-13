#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name of a pointer to function
 * @name: The string to add
 * @f: pointer to function
 *
 * Return: NULL
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
