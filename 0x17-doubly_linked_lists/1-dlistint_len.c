#include "lists.h"

/**
* dlistint_len - function that returns the number of elements in a,
* linked dlistint_t list.
* @h: poiner to the head of the list
*
* Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t num = 0;

while (h != NULL)
{
num++;
h = h->next;
}
return (num);
}
