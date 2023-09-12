#include <stdio.h>
/**
 * main - This program prints all the possible combination of single-digits
 * Return: Returns 0 when succesful
 */
int main(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
return (0);
}
