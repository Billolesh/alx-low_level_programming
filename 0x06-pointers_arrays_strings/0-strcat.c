#include "main.h"
/**
*_strncat - merges two strings
*@dest: the string beung add
*@src: the string being added
*@n: the numbers of bytes
*Return:a dest
*/
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
