#include "main.h"
#include <stdio.h>
/**
*print_array - prints an array
*@n: value in the arrray
*@a: consant used
*@n: number
*Return: value of array
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d, ", a[i]);
}
printf("\n");
}
