#include "lists.h"

/**
 * list_len - get the size of a linked list
 * @h: ptr to the head of the list
 * Return: the number of nodes
*/
size_t list_len(const list_t *h)
{
	int sum = 0;
	const list_t *curr = h;

	if (!h)
		return (0);

	while (curr)
	{
		sum++;
		curr = curr->next;
	}
	return (sum);
}
