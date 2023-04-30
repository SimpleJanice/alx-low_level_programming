#include "lists.h"

/**
* listint_len - number of elements in a linked list that returns
* @h: Pointer to a list
*
* Return: Number of elements
*/
size_t listint_len(const listint_t *h)
{
size_t i = 0;

while (h)
{
h = h->next;
++i;
}
return (i);
}
