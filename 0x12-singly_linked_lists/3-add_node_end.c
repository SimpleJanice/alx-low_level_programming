#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* add_node_end - add a new node at the end
* of a linked list
* @head: head of a list.
* @str: str element.
*
* Return: address of the new element. NUll if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *temp2;
list_t *temp;
unsigned int length = 0;
if (str == NULL)
	return (NULL);
temp = malloc(sizeof(list_t));
if (temp == NULL)
return (NULL);


temp->str = strdup(str);
if (temp->str == NULL)
{
free(temp);
return (NULL);
}
while (str[length])
length++;
temp->len = length;
temp->next = NULL;

if (*head == NULL)
{
*head = temp;
return (temp);
}
temp2 = *head;
while (temp2->next)
temp2 = temp2->next;
temp2->next = temp;
return (temp);
}

