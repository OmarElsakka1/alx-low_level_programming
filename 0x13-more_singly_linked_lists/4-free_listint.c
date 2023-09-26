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
	listint_t *tmp_ptr1, *tmp_ptr2;

	tmp_ptr1 = head;
	while (tmp_ptr1 != NULL)
	{
		tmp_ptr2 = tmp_ptr1->next;
		free(tmp_ptr1);
		tmp_ptr1 = tmp_ptr2;
	}
}
