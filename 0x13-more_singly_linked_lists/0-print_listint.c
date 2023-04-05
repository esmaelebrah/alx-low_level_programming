#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: pointer to the listint_t list to print
 *
 * return: the number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n",h->n);
		h = h->next;
		count++;
	}

	return (count);
}
