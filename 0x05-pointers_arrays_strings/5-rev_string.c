#include "main.h"
/**
*rev_string - reveses a string
*@words: the string being reversed
*@o: just an integer
*@s: the size of the array
*Return: 0 (success)
*/
void rev_string(char *s)
{
int words = 0;
 int o;
while(*s != '\0')
{
s++;
words++;
}
s--;
for (o = words - 1; o >= 0; o--)
{
 _putchar(*s);
 s--;
}
}
       
