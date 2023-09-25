#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements list of type listint_t
 * @h: Pointer to the list head
 * Return: Number of nodes in the given list
 *
 * Code by Omar El-Sakka
 */
size_t print_listint(const listint_t *h)
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
