#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserting a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node content.
 *
 * Return: The address of the new node or even Null.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp_p = *h, *new_p;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp_p = tmp_p->next;
		if (tmp_p == NULL)
			return (NULL);
	}

	if (tmp_p->next == NULL)
		return (add_dnodeint_end(h, n));

	new_p = malloc(sizeof(dlistint_t));
	if (new_p == NULL)
		return (NULL);

	new_p->n = n;
	new_p->prev = tmp_p;
	new_p->next = tmp_p->next;
	tmp_p->next->prev = new_p;
	tmp_p->next = new_p;

	return (new_p);
}
