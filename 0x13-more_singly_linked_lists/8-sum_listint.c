#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in nodes
 * @head: Address of the head of the linked list
 * Return: sum of all the data (n)
 *         Or it will be 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int summation = 0;

	while (head != NULL)
	{
		summation += head->n;
		head = head->next;
	}

	return (summation);
}
