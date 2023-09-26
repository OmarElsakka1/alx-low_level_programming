#include "lists.h"

/**
 * free_listint2 - Freeing a linked list of type listint_t list.
 * @head: Address of the
 *        head of the listint_t list.
 *
 * Description: Free a linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr_tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr_tmp = *head;
		*head = (*head)->next;
		free(ptr_tmp);
	}
	head = NULL;
}
