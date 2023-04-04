#include "lists.h"

/**
 *listint_len - returns the number of elements in a linked list
 *@h: pointer to the list listint_t
 *
 * return: the number of element in h
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
