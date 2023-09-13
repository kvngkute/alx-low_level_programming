#include <stdio.h>
/**
 * main - This program prints all the possible combination of single-digits
 * Return: Returns 0 when succesful
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i == 9)
putchar(i + '0');
else
putchar(',');
putchar(' ');
}
return (0);
}
