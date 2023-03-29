#include "main.h"
/**
*_strncpy - copies at most a number
*@dest: the buffer of storsge
*@src: the source string
*@n: the max imer of byte
*Return: a pointer
*/
char *_strncat(char *dest, char *src, int n)
{
int index = 0, src_len = 0;
while (src[index++])
src_len++;
for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];
for (index = src_len; index < n; index++)
dest[index] = '\0';
return (dest);
}
