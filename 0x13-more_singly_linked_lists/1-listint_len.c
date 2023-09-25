#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns number of elements in a type listint_t linked list
 * @h: Pointer to the linked list head
 * Return: Number of elements in the linked list
 *
 * Code by Omar El-Sakka
 */

size_t listint_len(const listint_t *h)
{
	size_t number_of_nodes;
	number_of_nodes = 0;

	while (h)
	{
		number_of_nodes++;
		h = h->next;
	}
	return (number_of_nodes);
}
