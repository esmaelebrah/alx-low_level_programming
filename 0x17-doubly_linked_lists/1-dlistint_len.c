#include "lists.h"

/**
 * return the number of element in dlistint_t
 * @h: head of nod
 *
 * return: length of nod
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		h = h->next;
		length += 1;
	}

	return (length);
}
