#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a linked list of type listint+t
 * @head: Pointer of pinter to list head
 * @n: Number that will be stored in the new node
 * Return: Address of new nodes or Just NULL
 *
 * Code by Omar El-Sakka
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
