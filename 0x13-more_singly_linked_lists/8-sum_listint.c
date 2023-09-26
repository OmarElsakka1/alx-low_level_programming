#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: Address of the head of a list
 * Return: sum of all the data (n)
 *         or, it will be just 0 if the list is empty
 * Made by: Omar El-Sakka
 */

int sum_listint(listint_t *head)
{
	int summation= 0;

	while (head != NULL)
	{
		summation += head->n;
		head = head->next;
	}

	return (summation);
}
