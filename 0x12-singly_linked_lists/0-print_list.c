#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
*print_list - printts all the elements
*@h: the contents
*Return: the size
*/
size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *current = h;
if (current != NULL)
{
printf("[5] %s\n", current->str);
current = current->next;
count++;
}
else
{
printf("[0] (nil");
current = current->next;
}
return count;
}
