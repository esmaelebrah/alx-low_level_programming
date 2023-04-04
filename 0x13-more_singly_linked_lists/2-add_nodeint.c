#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new nod at the beginning of a listint_t
 * @*head: pointer pints to the list listint_t
 * @n: the value to be added to the listint_t
 *
 * return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t * new_node;
	
	new_node = (listint_t *) malloc(sizeof(listint_t));
	
	if (new_nod ==NULL)
		return (NULL);
	
	
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	
	return (*head);
}
