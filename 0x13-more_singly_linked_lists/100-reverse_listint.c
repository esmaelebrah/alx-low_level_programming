#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list listint_t
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *after = NULL;

	while (*head != NULL)
	{
		after = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = after;
	}

	*head = before;

	return (*head);
}
