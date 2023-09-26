#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns number of elements in a type listint_t linked list and printing content
 * @h: Pointer to the linked list head
 * Return: Number of elements in the linked list
 *
 * Code by Omar El-Sakka
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t number = 0;
	long int difference;

	while (head)
	{
		difference = head - head->next;
		number++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (difference > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (number);
}
