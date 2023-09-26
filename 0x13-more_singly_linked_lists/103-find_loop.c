#include "lists.h"

/**
 * find_listint_loop - finds the loop in (listint_t) a linked list 
 * @head: head to a linked list to search in
 *
 * Return: Address to the first node that has a loop, or even NULL if not exist
 * 
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr = head;
	listint_t *fast_ptr = head;

	if (!head)
		return (NULL);

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		fast_ptr = fast_ptr->next->next;
		slow_ptr = slow_ptr->next;
		if (fast_ptr == slow_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}
			return (fast_ptr);
		}
	}

	return (NULL);
}
