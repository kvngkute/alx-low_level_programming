#include "main.h"
/**
 * _islower - This function checks lowercase character
 * @c: The character to be checked
 * Return: 1 for lowercase and 0 for others
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
