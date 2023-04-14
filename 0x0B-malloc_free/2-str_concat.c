#include "main.h"
#include <stdlib.h>
/**
*str_concat - merges two strings
*@s1: first string
*@s2: second sting
*Return: the new string yeah baby
*/
char *str_concat(char *s1, char *s2)
{
int x = 0;
int y = 0;
int i = 0;
int j = 0;
char *ptr;
if (s1 == NULL || s2 == NULL)
return (NULL);
while (s1[x] != '\0')
x++;
while (s2[y] != '\0')
y++;
ptr = (char *)malloc(sizeof(char) * (x + y + 1));
if (ptr == NULL)
return (NULL);
while (s1[i] != '\0')
{
ptr[i] = s1[i];
i++;
}
while (s2[j] != '\0')
{
ptr[i + j] = s2[j];
j++;
}
ptr[i + j] = '\0';
return (ptr);
}
