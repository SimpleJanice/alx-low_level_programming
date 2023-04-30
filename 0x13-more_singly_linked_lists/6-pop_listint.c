#include "lists.h"

/**
* pop_listint - The head node of a linked list is delete
* @head: Pointer to a struct
*
* Return: Head node's data (n)
* 0 if linked list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *tmp;
int num = 0;

if (*head)
{
num = (*head)->n;
tmp = (*head)->next;
free(*head);
*head = tmp;
}
return (num);
}
