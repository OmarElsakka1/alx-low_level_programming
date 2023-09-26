#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a linked list safely
 * @h: pointer to the head of  the linked list
 *
 * Return: number of elements in the freed list
 * Made by: Omar El-Sakka
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int difference;
	listint_t *ptr_temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			ptr_temp = (*h)->next;
			*h = ptr_temp;
			length++;
		}
		else
		{
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
