#include "lists.h"

/**
 * print_listint - prints a listint with newlines between
 * each node's value
 *
 * @h: head of list to print
 *
 * Return: length of list
 */
size_t print_listint(const listint_t *h)
{
    size_t num = 0;

    while (h)
    {
        printf("%d\n", h->n);
        num++;
        h = h->next;
    }

    return (num);
}
