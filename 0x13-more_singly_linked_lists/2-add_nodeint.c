#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of list of type listint+t
 * @head: Pointer of pinter to list head
 * @n: Number for new node
 * Return: Address of new node or null if not exist
 *
 * Code by Omar El-Sakka
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
