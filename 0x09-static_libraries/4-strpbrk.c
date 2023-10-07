#include "main.h"
/**
 * _strpbrk - This function locates a substring
 * @s: character to be located
 * @accept: Substring to be located
 *
 * Return: Matched byte or null
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if  (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
