#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *ptr_tmp;

	while (head)
	{
		ptr_tmp = head->next;
		free(head);
		head = ptr_tmp;
	}
}
