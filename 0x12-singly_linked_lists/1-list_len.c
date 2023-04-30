#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
*list_len - prints the length
*@h: the holder
*Return: the no of nodes
*/
size_t list_len(const list_t *h)
{
int count;
const list_t *current = h;
count = 0;
while (current != NULL)
{
current = current->next;
count++;
}
return (count);
}

