#include <stdio.h>

/**
 * main -  this is the main function or entry point of the program
 *
 *Return: it  will return 0 when the program is successful
 */

int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu bytes(s)\n", sizeof(int));
printf("Size of an long int: %lu bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long int));
printf("Size of a float: %lu bytes(s)\n", sizeof(float));
return (0);
}
