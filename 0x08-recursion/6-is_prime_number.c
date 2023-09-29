#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Returns if an integer is a prime number
 * @n: Number to check
 *
 * Return: 1 is n is a prime number and 0 if an even number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Calculates if a number is prime
 * @n: Number
 * @i: Iterate
 *
 * Return: 1 if n is prime, 0 if n is even
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
