#include "main.h"
/**
*_strchr - checks for a number
*@s: array being checked
*@c: value being  looked for
*Return: succsses
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (0);
}
