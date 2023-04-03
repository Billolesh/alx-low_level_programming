#include "main.h"
/**
* _memset - prints the memory with some chars
*@s: a pointer
*@b: a char
*@n: the size of the array
*Return: success
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *p = s;
for (i = 0; i < n; i++)
{
*p++ = b;
}
return (s);
}
