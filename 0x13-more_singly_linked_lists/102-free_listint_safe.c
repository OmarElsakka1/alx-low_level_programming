#include "lists.h"

/**
 * free_listp2 - freeing a linked list
 * @head: head of the linked list.
 *
 * Return: Come on it is void function
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
 * free_listint_safe - freeing  The linked list safely.
 * @h: head of the linked list.
 *
 * Return: size of the linked list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num_nodes = 0;
	listp_t *hptr, *ptr_new, *ptr_add;
	listint_t *ptr_curr;

	hptr = NULL;
	while (*h != NULL)
	{
		ptr_new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		ptr_new->p = (void *)*h;
		ptr_new->next = hptr;
		hptr = ptr_new;

		ptr_add = hptr;

		while (ptr_add->next != NULL)
		{
			ptr_add = ptr_add->next;
			if (*h == ptr_add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (num_nodes);
			}
		}

		ptr_curr = *h;
		*h = (*h)->next;
		free(ptr_curr);
		num_nodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (num_nodes);
}
