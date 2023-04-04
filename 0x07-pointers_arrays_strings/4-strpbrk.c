#include "main.h"
/**
*_strpbrk - program that looks for chars that are the same in two arrays
*@s: first array
*@accept: second array
*Return: pass
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i;
unsigned int k;
i = 0;
k = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (k = 0; accept[k] != '\0'; k++)
if (accept[k] == s[i])
{
return (&s[i]);
}
}
return ('\0');
}
