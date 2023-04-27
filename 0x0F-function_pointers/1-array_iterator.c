#include <stdlib.h>
#include <stdio.h>
/**
*array_iterator - executes a function
*@action: the function were using
*@array: the array were printing
*@size: the size if teh array
*Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
long unsigned int i;
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
