#include <stdio>
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
    
        while (head != NULL)
        {
		sum += head->n;
                head = head->next;
        }
 
        return (sum);
}
