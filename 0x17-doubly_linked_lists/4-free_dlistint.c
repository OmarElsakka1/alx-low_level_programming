#include "lists.h"

/**
 * free_dlistint - To Free a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_p;

	while (head)
	{
		tmp_p = head->next;
		free(head);
		head = tmp_p;
	}
}
