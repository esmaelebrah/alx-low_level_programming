#include "lists.h"

/**
 * dlistint_len - counts number of nodes
 * @h: head of node
 * Return: number of nodes
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
