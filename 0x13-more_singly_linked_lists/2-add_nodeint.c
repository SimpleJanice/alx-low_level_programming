#include "lists.h"

/**
* add_nodeint - Adds a new node at the beginning of a list
* @head: Pointer to address of a list
* @n: Integer
*
* Return: If the function fails - NULL.
* otherwise - the address of the new element.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
