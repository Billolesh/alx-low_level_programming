#include "main.h"
/**
*_strspn - comparison between two characters
*@accept: characters being compared
*@s: characters that are being compared
*Return: number of the chars that the same
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int j = 0;
unsigned int k = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (k = 0; accept[k] != '\0'; k++)
{
if (accept[k] == s[i])
{
j++;
break;
}
}
}
return (j);
}
