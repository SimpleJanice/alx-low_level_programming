#include "lists.h"

/**
* list_len - returns the number of elements in
* a linked list.
* @h: head of a list.
*
* Return: numbers of nodes.
*/
size_t list_len(const list_t *h)
{
size_t nnodes = 0;

while (h != NULL)
{
h = h->next;
nnodes++;
}
return (nnodes);
}
