#include "lists.h"

/**
 * adds a new node at the beginning of a dlistint_t list
 * @*head:double node of the list
 * @n: element to be added to the list
 * return: address of the new element,NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (*head);
}
