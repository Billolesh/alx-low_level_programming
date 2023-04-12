#include <stdlib.h>
#include "main.h"
/**
* *create_array - creates an array and intializes it with the char c
*@c: the char being intialized
*@size: the actual size of the memory being allocated
*Return: the string
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (i = 0; i < size; i++)
str[i] = c;
return (str);
}

