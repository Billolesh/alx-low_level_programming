#include "main.h"
/**
*swap_int - swaps two integers
*@a: an integer
*@b: an integer
*temp - use for swaping
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
