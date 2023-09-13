#include <stdio.h>
/**
 * main - This program prints all the possible combination of single-digits
 * Return: Returns 0 when succesful
 */
int main()
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (j != 0)
{
putchar(',');
putchar(' ');
}
putchar((i % 10) + '0');
}
}
return (0);
}
