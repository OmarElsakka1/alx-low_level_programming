#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: pointer to the new sorted hash table, or even NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
  shash_table_t *ht_ptr;
  unsigned long int i;

  ht_ptr = malloc(sizeof(shash_table_t));
  if (ht_ptr == NULL)
    return (NULL);

  ht_ptr->size = size;
  ht_ptr->array = malloc(sizeof(shash_node_t *) * size);
  if (ht_ptr->array == NULL)
    return (NULL);
  for (i = 0; i < size; i++)
    ht_ptr->array[i] = NULL;
  ht_ptr->shead = NULL;
  ht_ptr->stail = NULL;

  return (ht_ptr);
}

/**
 * shash_table_set - This adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: 1 in case of success, or 0 in case of failure.
 * Created by: Omar El-Sakka
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
  shash_node_t *new, *tmp;
  char *value_copy;
  unsigned long int index;

  if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
    return (0);

  value_copy = strdup(value);
  if (value_copy == NULL)
    return (0);

  index = key_index((const unsigned char *)key, ht->size);
  tmp = ht->shead;
  while (tmp)
    {
      if (strcmp(tmp->key, key) == 0)
	{
	  free(tmp->value);
	  tmp->value = value_copy;
	  return (1);
	}
      tmp = tmp->snext;
    }

  new = malloc(sizeof(shash_node_t));
  if (new == NULL)
    {
      free(value_copy);
      return (0);
    }
  new->key = strdup(key);
  if (new->key == NULL)
    {
      free(value_copy);
      free(new);
      return (0);
    }
  new->value = value_copy;
  new->next = ht->array[index];
  ht->array[index] = new;

  if (ht->shead == NULL)
    {
      new->sprev = NULL;
      new->snext = NULL;
      ht->shead = new;
      ht->stail = new;
    }
  else if (strcmp(ht->shead->key, key) > 0)
    {
      new->sprev = NULL;
      new->snext = ht->shead;
      ht->shead->sprev = new;
      ht->shead = new;
    }
  else
    {
      tmp = ht->shead;
      while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
	tmp = tmp->snext;
      new->sprev = tmp;
      new->snext = tmp->snext;
      if (tmp->snext == NULL)
	ht->stail = new;
      else
	tmp->snext->sprev = new;
      tmp->snext = new;
    }

  return (1);
}

/**
 * shash_table_get - This Retrieves the value associated with
 *                   a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: value associated with key in ht, or even NULL.
 * Created by: Omar El-Sakka
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
  shash_node_t *node_ptr;
  unsigned long int index;

  if (ht == NULL || key == NULL || *key == '\0')
    return (NULL);

  index = key_index((const unsigned char *)key, ht->size);
  if (index >= ht->size)
    return (NULL);

  node_ptr = ht->shead;
  while (node_ptr != NULL && strcmp(node_ptr->key, key) != 0)
    node_ptr = node_ptr->snext;

  return ((node_ptr == NULL) ? NULL : node_ptr->value);
}

/**
 * shash_table_print - This prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 * Created by: Omar El-Sakka
 */
void shash_table_print(const shash_table_t *ht)
{
  shash_node_t *node_ptr;

  if (ht == NULL)
    return;

  node_ptr = ht->shead;
  printf("{");
  while (node_ptr != NULL)
    {
      printf("'%s': '%s'", node_ptr->key, node_ptr->value);
      node_ptr = node_ptr->snext;
      if (node_ptr != NULL)
	printf(", ");
    }
  printf("}\n");
}

/**
 * shash_table_print_rev - This prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 * Created by: Omar El-Sakka
 */
void shash_table_print_rev(const shash_table_t *ht)
{
  shash_node_t *node_ptr;

  if (ht == NULL)
    return;

  node_ptr = ht->stail;
  printf("{");
  while (node_ptr != NULL)
    {
      printf("'%s': '%s'", node_ptr->key, node_ptr->value);
      node_ptr = node_ptr->sprev;
      if (node_ptr != NULL)
	printf(", ");
    }
  printf("}\n");
}

/**
 * shash_table_delete - This deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * Created by: Omar El-Sakka
 */
void shash_table_delete(shash_table_t *ht)
{
  shash_table_t *head = ht;
  shash_node_t *node_ptr, *tmp_ptr;

  if (ht == NULL)
    return;

  node_ptr = ht->shead;
  while (node_ptr)
    {
      tmp_ptr = node_ptr->snext;
      free(node_ptr->key);
      free(node_ptr->value);
      free(node_ptr);
      node_ptr = tmp_ptr;
    }

  free(head->array);
  free(head);
}
