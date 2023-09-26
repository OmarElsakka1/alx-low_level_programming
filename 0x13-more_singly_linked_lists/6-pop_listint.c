#include "lists.h"

/**
 * pop_listint - deleting the head node of the linked list
 * @head: head of the linked list.
 *
 * Return: head node of the data
 * Made by: Omar El-Sakka
 */
int pop_listint(listint_t **head)
{
	int h_node;
	listint_t *h;
	listint_t *curr_ptr;

	if (*head == NULL)
		return (0);

	curr_ptr = *head;

	h_node = curr_ptr->n;

	h = curr_ptr->next;

	free(curr_ptr);

	*head = h;

	return (h_node);
}
