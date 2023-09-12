#include <stdio.h>
/**
 * main - This program prints the lowercase alphabets in reverse
 * Return: The program returns 0 when succesful
 */
int main(void)
{
char i;
for (i = 'z' ; i >= 'a' ; i--)
putchar(i);
putchar('\n');
return (0);
}
