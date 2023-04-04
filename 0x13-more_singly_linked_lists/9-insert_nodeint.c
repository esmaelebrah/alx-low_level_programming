#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @*head: pointer points to the list listint_t
 * @idx: the index of the listint_t where the new nod should be added
 * @n: the data of the new nod should be added
 *
 * return: the address of new nod
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
  listint_t *new_nod;
  new_nod = (listint_t *)malloc(sizeof(listint_t));
   if (new_nod == NULL)
   {
       return (NULL);
   }
  new_nod->n=n;
  listint_t *temp;
  temp = *head;
  unsigned int i;

  if (idx == 0)
  {
      new_nod->next = *head;
      *head = new_nod;
      return(new_nod);
  }
  
  if (*head == NULL)
  {
      return (NULL);
  }

  for (i = 0; i < idx; i++)
  {
      if (i == idx-1)
      {
          new_nod->next = temp->next;
          temp->next = new_nod;
          return (new_nod);
      }
      else
      {
          temp = temp->next;
      }
  }

  return (NULL);
   
}
