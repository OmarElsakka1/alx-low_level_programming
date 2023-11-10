#include "lists.h"

/**
 * delete_dnodeint_at_index - Deleting a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: If success -> 1, if failure -> -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp_p = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmp_p == NULL)
			return (-1);
		tmp_p = tmp_p->next;
	}

	if (tmp_p == *head)
	{
		*head = tmp_p->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmp_p->prev->next = tmp_p->next;
		if (tmp_p->next != NULL)
			tmp_p->next->prev = tmp_p->prev;
	}

	free(tmp_p);
	return (1);
}
