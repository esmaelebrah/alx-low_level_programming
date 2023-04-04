#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - delete the list in listint_t
 * @head: ponter pointa to list liatint_t
 *
 * return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (temp ==NULL)
		return;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}

	*head =NULL;
}
