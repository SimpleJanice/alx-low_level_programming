#include "lists.h"
#include <stdio.h>
/**
* listint_len - number of elements in a linked list that returns
* @h: Pointer to a list
*
* Return: The number of elements in the listint_t list
*/
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
