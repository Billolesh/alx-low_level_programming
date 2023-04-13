#include "main.h"
#include <stdlib.h>
/**
*_strdup - copies the contetn of a string onto another string
*@str: the original string
*Return: the new string
*/
char *_strdup(char *str)
{
int i;
int length;
char *copy;
i = 0;
length = 0;
if (str == NULL)
return (NULL);
while (str[length] != '\0')
length++;
copy = (char *)malloc(length + 1);
if (copy == NULL)
return (NULL);
while (i <= length)
{
copy[i] = str[i];
i++;
}
copy[i] = '\0';
return (copy);
}

