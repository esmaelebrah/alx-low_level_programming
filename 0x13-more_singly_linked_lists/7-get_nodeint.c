#include "lists.h"

/**
 * *get_nodeint_at_index - get the nth node of listint_t
 * @head: pointer points to listint_t
 * @index: the index of the nod starting from 0
 *
 * return: nth node 
 * return: 0 if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;
	temp = head;

        while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
        return (temp ? temp : NULL);
}
