#include "lists.h"

/**
 * free_listp2 - freeing the linked list
 * @head: head of the linked list.
 *
 * Return: Dude, there is no return
 * Made by: Omar El-Sakka
 */
void free_listp2(listp_t **head)
{
	listp_t *ptr_temp;
	listp_t *ptr_curr;

	if (head != NULL)
	{
		ptr_curr = *head;
		while ((ptr_temp = ptr_curr) != NULL)
		{
			ptr_curr = ptr_curr->next;
			free(ptr_temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - freeing the linked list.
 * @h: head of the linked list.
 *
 * Return: size of the the linked list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (nnodes);
}
