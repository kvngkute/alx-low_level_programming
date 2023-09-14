#include "main.h"
/**
 * print_last_digit - This program prints the last digit of a number
 * @n: The number to be printed
 * Return: Returns the last digit of a number
 */
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 10)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
