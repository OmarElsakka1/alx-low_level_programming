#include "lists.h"

/**
 * delete_nodeint_at_index - deleting a certain node in the linked list
 * @head: Address the head of a list
 * @index: index of the node in the linked list
 * Return: 1 -> success, -1 -> failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previous_ptr;
	listint_t *next;

	previous_ptr = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
		{
			previous_ptr = previous_ptr->next;
		}
	}

	if (previous_ptr == NULL || (previous_ptr->next == NULL && index != 0))
	{
		return (-1);
	}

	next = previous_ptr->next;

	if (index != 0)
	{
		previous_ptr->next = next->next;
		free(next);
	}
	else
	{
		free(previous_ptr);
		*head = next;
	}

	return (1);
}
