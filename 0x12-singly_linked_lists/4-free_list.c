#include "lists.h"
/**
 * free_list - frees linked list
 * @head: adrres of ptr to head
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *curr;

	while (head)
	{
		curr = head;
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
