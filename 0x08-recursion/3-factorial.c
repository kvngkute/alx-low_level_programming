#include  "main.h"
/**
 * factorial - Returns the factorial of a given number
 * @n: Number to factor
 *
 * Return: Factorial of n, or -1 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
