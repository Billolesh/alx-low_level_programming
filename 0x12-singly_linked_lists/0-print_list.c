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
while (current != NULL)
{
if (current->str != NULL)
printf("[%d] %s\n", current->len, current->str);
else
printf("[0] (nil)\n");
current = current->next;
count++;
}
return (count);
}
