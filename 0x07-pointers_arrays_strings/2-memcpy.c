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
unsigned int i;
 i = 0;
 while (i < n)
   {
     *dest = *src;
     dest++;
     src++;
     i++;
   }
     dest = dest - i
   return (dest);
   }

