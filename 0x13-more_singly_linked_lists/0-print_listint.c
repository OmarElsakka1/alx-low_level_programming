#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints a listint with newlines between
 * each node's value
 *
 * @h: head of list to print
 *
 * Return: length of the linked list
 * Code by Omar El-Sakka
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
