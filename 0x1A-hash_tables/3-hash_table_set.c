#include "hash_tables.h"
/**
 * hash_table_set - adds a new entry to the table
 * @ht: hash table
 * @key: key string
 * @value: value string
 * Return: 1 on success, 0 on failure
 * Created by: Omar El-Sakka
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
  hash_node_t *node_prt, *current_ptr;
  unsigned long idx;
  char *newVal_ptr;

  if (!key || !ht || !ht->array || ht->size == 0 || strlen(key) == 0 || !value)
    return (0);
  idx = key_index((const unsigned char *)key, ht->size);
  current_ptr = ht->array[idx];
  while (current_ptr)
    {
      if (strcmp(current_ptr->key, key) == 0)
	{
	  newVal_ptr = strdup(value);
	  if (!newVal_ptr)
	    return (0);
	  free(current_ptr->value);
	  current_ptr->value = newVal_ptr;
	  return (1);
	}
      current_ptr = current_ptr->next;
    }
  /* If it does not exist, create it*/
  node_ptr = malloc(sizeof(hash_node_t));
  if (!node_ptr)
    return (0);
  node_ptr->key = strdup(key);
  node_ptr->value = strdup(value);
  if (!node_ptr->key || !node_ptr->value)
    {
      if (node_ptr->key)
	free(node_ptr->key);
      free(node_ptr);
      return (0);
    }
  node_ptr->next = NULL;
  /* Place it */
  node_ptr->next = ht->array[idx];
  ht->array[idx] = node_ptr;
  return (1);
}
