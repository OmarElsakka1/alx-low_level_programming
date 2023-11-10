#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the start of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: the address of the new node or even NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_p;

	new_p = malloc(sizeof(dlistint_t));
	if (new_p == NULL)
		return (NULL);

	new_p->n = n;
	new_p->prev = NULL;
	new_p->next = *head;
	if (*head != NULL)
		(*head)->prev = new_p;
	*head = new_p;

	return (new_p);
}
