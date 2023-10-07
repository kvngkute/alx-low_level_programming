 #include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c: Character to be checked
 * Return: Returns 1 for alphabets and 0 for anything else
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
