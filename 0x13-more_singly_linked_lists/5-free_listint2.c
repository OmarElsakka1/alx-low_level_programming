#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - freeing a linked list.
 * @head: Address of the head of the linked list.
 * 
 * Made by: Omar El-Sakka
 **/

void free_listint2(listint_t **head)
{
	listint_t *ptr_tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		ptr_tmp = (*head)->next;
		free(*head);
		*head = ptr_tmp;
	}
}
