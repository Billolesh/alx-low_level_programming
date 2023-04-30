#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
*add_node - adds a new head valie
*@head: the head of the first node
*@str: the sting
*Return: the address of the new elemnt
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
if (str == NULL || head == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(list_t));
{
if (new_node == NULL)
{
return (NULL);
}      
new_node->str = strdup(str);
if (new_node->str  == NULL)
{
return (NULL);
}
else
{
printf("[%d] %s\n", new_node->len, new_node->str);
}
new_node->next = *head;
*head = new_node;
return (new_node);
}
}
