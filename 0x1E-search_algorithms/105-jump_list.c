#include "search_algos.h"

/**
 * jump_list - Searching for an algorithm in a sorted singly
 *             linked list of integers using jump search.
 * @list: Pointer to the  head of the linked list to search.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where the value is located., or NULL
 *
 * Description: Printing a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t step, stepsize;
listint_t *node, *jump;

if (list == NULL || size == 0)
return (NULL);

step = 0;
stepsize = sqrt(size);
for (node = jump = list; jump->index + 1 < size && jump->n < value;)
{
node = jump;
for (step += stepsize; jump->index < step; jump = jump->next)
{
if (jump->index + 1 == size)
break;
}
printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
}

printf("Value found between indexes [%ld] and [%ld]\n",
node->index, jump->index);

for (; node->index < jump->index && node->n < value; node = node->next)
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

return (node->n == value ? node : NULL);
}
