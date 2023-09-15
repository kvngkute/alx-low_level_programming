#include "main.h"
/**
 * _isupper - checks for lowercase alphabets
 * @c: Alphabet to be checked
 * Return: 0 for anything else and 1 for uppercase alphabet
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
