#include "lists.h"

/**
 * get_nodeint_at_index - returns the index of the node of a linked list
 * @head: Address of the head of a list
 * @index: index of the node
 *
 * Return: The node or even NULL if node not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index && head != NULL; j++)
	{
		head = head->next;
	}

	return (head);
}
