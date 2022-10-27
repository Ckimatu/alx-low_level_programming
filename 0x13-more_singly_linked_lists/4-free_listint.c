#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -  frees a listint_t list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
