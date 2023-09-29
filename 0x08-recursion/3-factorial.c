#include  "main.h"
/**
 * factorial - Returns the factorial of a given number
 * @n: Number to factor
 *
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return (n * factorial(n - 1));
}
