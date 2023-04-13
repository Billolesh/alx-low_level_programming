#include "main.h"
#include <stdlib.h>
/**
*_strdup - copies the contetn of a string onto another string
*@str: the original string
*Return: the new string
*/
char *_strdup(char *str)
{
int length = 0;
char *copy;
if (str == NULL)
return (NULL);
while (str[length] != '\0')
length++;
copy = (char *)malloc(length + 1);
if (copy == NULL)
return (NULL);
for (int i = 0; i <= length; i++)
copy[i] = str[i];
return (copy);
}
