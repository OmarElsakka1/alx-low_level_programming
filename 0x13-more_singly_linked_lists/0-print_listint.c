#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements list of type listint_t which is linked list
 * @h: Pointer to the list head
 * Return: Number of nodes in the linked list
 *
 * Code by Omar El-Sakka
 */

size_t print_listint(const listint_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;

	while (h)
	{
		number_of_nodes++;

		printf("%d\n", h->n);
		h = h->next;
	}
	return (number_of_nodes);
}
