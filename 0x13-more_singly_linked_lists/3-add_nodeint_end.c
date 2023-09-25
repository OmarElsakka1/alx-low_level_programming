#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a lit of type listint_t
 * @head: Pointer of pointer to the list head
 * @n: Number for new node
 * Return: Address of new elements or NULL
 *
 * Code by Omar El-Sakka
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *end_ptr;

	if (head == NULL)
		return (NULL);
	end_ptr = *head;
	if (end_ptr != NULL)
		while (end_ptr -> next != NULL)
			end_ptr = end_ptr -> next;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr -> n = n;
	if (*head == NULL)
	{
		*head = ptr;
		ptr -> next = NULL;
	}
	else
	{
		end_ptr -> next = ptr;
		ptr -> next = NULL;
	}
	return (ptr);
}
