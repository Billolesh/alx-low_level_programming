#include <stdio.h>
#include <stdlib.h>
/**
* int_index - check for an int in an array
* @array: the array of int
* @size: the size of the array
* @cmp: the pointer to the function
* Return: the number
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}
else
{
for (i = 0; i < size; i++)
{
if ((*cmp)(array[i]) >= 1 && (*cmp)(array[i]) <= 9)
{
return (i);
}
}
return (-1);
}
}
