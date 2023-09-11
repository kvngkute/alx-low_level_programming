#include <stdio.h>

/**
 * main -  this is the main function or entry point of the program
 *
 *Return: it  will return 0 when the program is successful
 */

int main(void)
{
printf("Size of a char: %u byte(s)", sizeof(char));
printf("Size of an int: %u bytes(s)", sizeof(int));
printf("Size of an long int: %u bytes(s)", sizeof(long int));
printf("Size of a long long int: %u bytes(s)", sizeof(long long int));
printf("Size of a float: %u bytes(s)", sizeof(float));
return (0);
}
