#include "lists.h"
/**
 * add_node_end - adds a new entry at the end
 * @head: adrres of ptr to head
 * @str: content of new node
 * Return: the adrr of new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *curr;

	newNode = malloc(sizeof(list_t));
	curr = *head;
	if (!newNode || !head)
		return (NULL);

	if (str)
	{
		newNode->str = strdup(str);
		newNode->len = strlen(str);
	}
	if (curr)
	{
		while (curr->next)
			curr = curr->next;
		curr->next = newNode;
	}
	else
		*head = newNode;

	return (newNode);
}
