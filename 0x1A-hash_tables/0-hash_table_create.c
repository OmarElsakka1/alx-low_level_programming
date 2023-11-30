#include "hash_tables.h"

/**
 * hash_table_create - This creates a new hash table
 * @size: array size
 * Return: a pointer to the newly created hash table
 * Created by: Omar El-Sakka
 */
hash_table_t *hash_table_create(unsigned long int size)
{
  hash_table_t *ht;
  unsigned long int i;

  ht = malloc(sizeof(hash_table_t));
  if (!ht)
    return (NULL);
  ht->size = size;
  ht->array = (hash_node_t **) calloc(ht->size, sizeof(hash_node_t *));

  for (i = 0; i < size; i++)
    ht->array[i] = NULL;

  return (ht);
}
