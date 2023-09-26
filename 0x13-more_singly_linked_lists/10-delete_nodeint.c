#include "lists.h"

/**
 * delete_nodeint_at_index - deleting the node of the index in the linked list.
 * @head: head of the linked list.
 * @index: index of the node to be deleted
 *
 * Return: 1 in case of success, -1 in case of fail.
 * Made by: Omar El-Sakka
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev_ptr;
	listint_t *next;

	prev_ptr = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev_ptr != NULL; i++)
		{
			prev_ptr = prev_ptr->next;
		}
	}

	if (prev_ptr == NULL || (prev_ptr->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev_ptr->next;

	if (index != 0)
	{
		prev_ptr->next = next->next;
		free(next);
	}
	else
	{
		free(prev_ptr);
		*head = next;
	}

	return (1);
}
