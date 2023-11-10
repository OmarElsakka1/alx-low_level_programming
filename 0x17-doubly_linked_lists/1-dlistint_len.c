#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a linked dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of elements existing in the dlistint_t list.
 * Made by: Omar El-Sakka
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		new_nodes++;
		h = h->next;
	}

	return (new_nodes);
}
