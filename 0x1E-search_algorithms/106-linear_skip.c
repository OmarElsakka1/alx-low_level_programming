#include "search_algos.h"

/**
 * linear_skip - Searching for an algorithm in a sorted singly
 *               linked list of integers using linear skip.
 * @list: Pointer to the  head of the linked list to search.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where the value is located, NULL.
 *
 * Description: Printing a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *node_ptr, *jump;

if (list == NULL)
return (NULL);

for (node_ptr = jump = list; jump->next != NULL && jump->n < value;)
{
node_ptr = jump;
if (jump->express != NULL)
{
jump = jump->express;
printf("Value checked at index [%ld] = [%d]\n",
jump->index, jump->n);
}
else
{
while (jump->next != NULL)
jump = jump->next;
}
}

printf("Value found between indexes [%ld] and [%ld]\n",
node_ptr->index, jump->index);
bool a = node_ptr->index < jump->index && node_ptr->n < value;
for (; a; node_ptr = node_ptr->next)
printf("Value checked at index [%ld] = [%d]\n", node_ptr->index, node_ptr->n);
printf("Value checked at index [%ld] = [%d]\n", node_ptr->index, node_ptr->n);

return (node_ptr->n == value ? node_ptr : NULL);
}
