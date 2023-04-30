#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_list - frees the list_t
*@head: the first element
*Return: nothing
*/
void free_list(list_t *head)
{
list_t *current;
while (head != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current);
}
}

