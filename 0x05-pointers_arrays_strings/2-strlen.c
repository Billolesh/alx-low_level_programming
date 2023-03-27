#include "main.h"
/**
*_strlen - prints out the length of a string
*@s: the string its self
*count - couts the number of chars
*Return: count
*/
int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}
