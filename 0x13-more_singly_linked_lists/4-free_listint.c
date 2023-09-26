#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free a linked list.
 * @head: Address of the head of the linked list.
 * 
 * Made by: Omar El-Sakka
 **/

void free_listint(listint_t *head)
{
	listint_t *ptr_tmp;

	while (head)
	{
		ptr_tmp = head->next;
		free(head);
		head = ptr_tmp;
	}
}
