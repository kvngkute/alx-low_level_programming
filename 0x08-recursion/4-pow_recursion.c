#include "main.h"
/**
* _pow_recursion - Returns the value of x raised to y
* @x: Value
* @y: The power
*
* Return: Result
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
