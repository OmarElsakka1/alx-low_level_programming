#include "lists.h"

/**
 * print_list - prints a linked list
 * @h: ptr to the head of the list
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	int sum = 0;
	const list_t *curr = h;

	if (!h)
		return (0);

	while (curr)
	{
		sum++;
		curr->str ?
		printf("[%u] %s\n", curr->len, curr->str) :
		printf("[0] (nil)\n");
		curr = curr->next;
	}
	return (sum);
}
