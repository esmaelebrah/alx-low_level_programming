#include "lsits.h"

/**
 * pop_listint - deletes the haed node of a listint_t
 * @*head: points to the list listint_t
 *
 * return: the head nod's data
 * return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
