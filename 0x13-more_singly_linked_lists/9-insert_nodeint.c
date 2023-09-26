#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in certain index
 * @head: Address of the head of a list
 * @idx: index of the new node to be added in the linked list
 * @n: Value of the new node
 * Return: Address of the new node, or just NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_ptr;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new_ptr = malloc(sizeof(listint_t));
	if (new_ptr == NULL)
		return (NULL);

	new_ptr->n = n;

	if (idx == 0)
	{
		new_ptr->next = *head;
		*head = new_ptr;
	}
	else
	{
		new_ptr->next = h->next;
		h->next = new_ptr;
	}

	return (new_ptr);
}
