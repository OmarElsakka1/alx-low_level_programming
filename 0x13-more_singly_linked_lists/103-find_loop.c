#include "lists.h"

/**
 * find_listint_loop - finds the loop in the linked list.
 * @head: The head of the linked list.
 *
 * Return: Address of the first node of the loop
 * Made by: Omar El-Sakka
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr;
	listint_t *previous_ptr;

	ptr = head;
	previous_ptr = head;
	while (head && ptr && ptr->next)
	{
		head = head->next;
		ptr = ptr->next->next;

		if (head == ptr)
		{
			head = previous_ptr;
			previous_ptr =  ptr;
			while (1)
			{
				ptr = previous_ptr;
				while (ptr->next != head && ptr->next != previous_ptr)
				{
					ptr = ptr->next;
				}
				if (ptr->next == head)
					break;

				head = head->next;
			}
			return (ptr->next);
		}
	}

	return (NULL);
}
