#include "main.h"
/**
* _strlen_recursion - fuction that prints the length of an array
*@s: string being counted
*Return: the length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
