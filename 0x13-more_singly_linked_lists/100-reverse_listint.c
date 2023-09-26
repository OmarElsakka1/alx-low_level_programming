#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the head of the linked list
 * Return: pointer to the head of the linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr_p;
	listint_t *ptr_n;

	ptr_p = NULL;
	ptr_n = NULL;

	while (*head != NULL)
	{
		ptr_n = (*head)->next;
		(*head)->next = ptr_p;
		ptr_p = *head;
		*head = ptr_n;
	}

	*head = ptr_p;
	return (*head);
}
