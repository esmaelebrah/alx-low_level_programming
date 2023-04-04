#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a list listint_t
 * @*head: pointer points to the list listint_t
 * @n: the value to be added to the list listint_t
 *
 * return: the addres of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nod;
	new_nod = (struct listint_s *) malloc(sizeof(struct listint_s));
	if (new_nod == NULL)
	{
		return(NULL);
	}

	new_nod->n = n;

	if (*head == NULL)
	{
		new_nod->next = NULL;
		*head = new_nod;
		return(new_nod);
	}

	listint_t *temp;
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	new_nod->next = NULL;
	temp->next = new_nod;

	return (new_nod);
}
