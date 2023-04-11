#include "main.h"
/**
*_memset - fill a block of memory with a specific value
*@s: starting addredd
*@b: the desired value
*@n: number of bytes
*Return: pass
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
