#include <stdio.h>
/**
 * main - This program prints all single digit number of base 10
 * Return: Returns 0 when program is succesful
 */
int main(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
putchar(i + '0');
putchar('\n');
return (0);
}
