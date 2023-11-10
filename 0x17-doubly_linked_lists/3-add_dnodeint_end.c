#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of the dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: The address of the new node or even NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_p, *last_p;

	new_p = malloc(sizeof(dlistint_t));
	if (new_p == NULL)
		return (NULL);

	new_p->n = n;
	new_p->next = NULL;

	if (*head == NULL)
	{
		new_p->prev = NULL;
		*head = new_p;
		return (new_p);
	}

	last_p = *head;
	while (last_p->next != NULL)
		last_p = last_p->next;
	last_p->next = new_p;
	new_p->prev = last_p;

	return (new_p);
}
