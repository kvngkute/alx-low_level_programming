#include <stdio.h>
/**
 * main - This program prints all the numbers of base 16
 * Return: Returns 0 when succesful
 */
int main(void)
{
int i;
char k;
for (i = 0 ; i < 10 ; i++)
putchar(i + '0');
for (k = 'a' ; k <= 'f' ; k++)
putchar(k);
putchar('\n');
return (0);
}
