#include "main.h"
/**
* _memcpy - the code below duplicates the content of dest in src
*@dest: stores the content
*@n: size of the array
*@src: content has been duplicated in this
*Return: pass
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = dest;
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (p);
}
