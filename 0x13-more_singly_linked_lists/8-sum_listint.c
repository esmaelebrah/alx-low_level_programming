#include "lists.h"

/**
 * sum_listint - sums all the data of a liatint_t
 * @head: pointer points to listint_t
 *
 * return: sum of all data
 * return: 0 if listint_t is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
        listint_t *temp = head;

        while (temp)
        {
		sum += temp->n;
                temp = temp->next;
        }
 
        return (sum);
}
