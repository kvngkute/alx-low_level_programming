#include "main.h"
/**
 * _puts - Points a string to a stdout
 * @str: string to print
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
