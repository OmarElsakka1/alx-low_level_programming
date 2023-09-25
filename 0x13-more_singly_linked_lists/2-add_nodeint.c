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
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
