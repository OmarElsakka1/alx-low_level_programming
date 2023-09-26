#include "lists.h"

/**
 * delete_nodeint_at_index - deleteing a certain node in the given linked list
 * @head: pointer to the head of the linked list
 * @index: index of the nod in the linked list to be  deleted
 * Return: 1 -> sucess, -1 -> Fail
 * Made by: Omar El-Sakka
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previous;
	listint_t *next;

	previous = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
		{
			previous = previous->next;
		}
	}

	if (previous == NULL || (previous->next == NULL && index != 0))
	{
		return (-1);
	}

	next = previous->next;

	if (index != 0)
	{
		previous->next = next->next;
		free(next);
	}
	else
	{
		free(previous);
		*head = next;
	}

	return (1);
}
