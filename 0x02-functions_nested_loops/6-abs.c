#include "main.h"
/**
 * _abs - Comput the absolute value of an integer
 * @c: The number to be computed
 * Return: Returns the value of number or zero
 */
int _abs(int c)
{
if (c < 0)
{
int abs;
abs = c * -1;
return (abs);
}
return (c);
}
