#include <stdio.h>

/**
 * main -  this is the main function or entry point of the program
 *
 *Return: it  will return 0 when the program is successful
 */

int main(void)
{
printf("Size of a char: %nm byte(s)", sizeof(char));
printf("Size of an int: %nm bytes(s)", sizeof(int));
printf("Size of an long int: %nm bytes(s)", sizeof(long int));
printf("Size of a long long int: %nm bytes(s)", sizeof(long long int));
printf("Size of a float: %nm bytes(s)", sizeof(float));
return (0);
}
