#include "main.h"
/**
 * _isupper - Checks for lowercase alphabets
 * @c: The alphabet to be checked
 * Return: 0 for anyother case and 1 for uppercase
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
