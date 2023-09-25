#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_listint - Prints all elements list (linked list) of type listint_t 
 * @h: Pointer to the list head
 * Return: Number of nodes in the linked list
 *
 * Code by Omar El-Sakka
 */
size_t print_listint(const listint_t *h)
{
	size_t length;

	if (h == NULL)
		return (0);

	for (length = 0; h != NULL; h = h->next, length++)
		printf("%d\n", h->n);

	return (length);
}
