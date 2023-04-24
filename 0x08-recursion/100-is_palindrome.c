#include "main.h"
/**
*is_palindrome - this cecks if a string is a palbimore
*@s: the string being checked
*Return: the answer
*/
int is_palindrome(char *s)
{
int i  = 0;
int n = 0;
while (s[n] != '\0')
{
n++;
}
for (i = 0; i < n / 2; i++)
{
if (s[i] != s[n - i - 1])
{
return (0);
}
}
return (1);
}
