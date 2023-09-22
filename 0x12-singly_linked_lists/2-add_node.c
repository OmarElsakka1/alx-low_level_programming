#include "lists.h"
/**
 * add_node - adds a new entry at the beginning
 * @head: adrres of ptr to head
 * @str: content of new node
 * Return: the adrr of new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode != NULL)
	{
		newNode->next = *head;
		newNode->str = strdup(str);
		newNode->len = strlen(str);
	}
	else
		return (NULL);

	*head = newNode;
	return (newNode);
}
