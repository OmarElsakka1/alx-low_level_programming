#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * add_nodeint_end - Adds a new node at the end of a lit of type listint_t
 * @head: Pointer of pointer to the list head
 * @n: Number for new node
 * Return: Address of new elements or NULL
 *
 * Code by Omar El-Sakka
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr1, *ptr2;

	ptr1 = malloc(sizeof(listint_t));
	if (ptr1 == NULL)
		return (NULL);

	ptr1->n = n;
	ptr1->next = NULL;

	if (*head == NULL)
	{
		*head = ptr1;
		return (ptr1);
	}

	ptr2 = *head;
	while (ptr2->next)
		ptr2 = ptr2->next;
	ptr2->next = ptr1;
	return (ptr1);
}
