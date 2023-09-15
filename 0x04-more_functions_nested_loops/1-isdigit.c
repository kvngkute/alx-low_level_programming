#include "main.h"
/**
 * _isdigit - checks for a digit in the characters
 * @c: The character to be checked
 * Return: 0 for non-digits and 1 for digit characters
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
