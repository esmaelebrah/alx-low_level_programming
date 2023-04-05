#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: pointer to the listint_t list to print
 *
 * return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t count;
	count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
