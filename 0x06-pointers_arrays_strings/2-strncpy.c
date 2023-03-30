#include "main.h"
/**
*_strcmp - compares pointers
*@s1: a pointer
*@s2: a pointers
*Return:  If str1 < str2
*If str1 == str2,  0.
*If str1 > str2
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
