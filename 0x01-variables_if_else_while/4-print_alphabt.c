#include <stdio.h>
/**
 * main - Prints all the aphabets except q and e
 * Return: Returns when program is successful
 */
int main(void)
{
char i;
for (i = 'a' ; i <= 'z'; i++)
if (i != 'q' && i != 'e')
putchar(i);
putchar('\n');
return (0);
}
