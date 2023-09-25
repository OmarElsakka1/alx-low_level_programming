#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns number of elements in a type listint_t list
 * @h: Pointer to the list head
 * Return: Number of elements in the list
 *
 * Code by Omar El-Sakka
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_nodes;

	num_of_nodes = 0;

	while (h)
	{
		num_of_nodes++;

		h = h->next;
	}
	return (num_of_nodes);
}
