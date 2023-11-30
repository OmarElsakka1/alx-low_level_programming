#include "hash_tables.h"
/**
 * hash_table_get - This retrives value
 * @ht: hash table
 * @key: key
 * Return: Value
 * Created by: Omar El-Sakka
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
  hash_node_t *current_ptr;
  unsigned long idx;

  if (!key || !ht || !ht->array || ht->size == 0 || strlen(key) == 0)
    return (NULL);
  idx = key_index((const unsigned char *)key, ht->size);
  current_ptr = ht->array[idx];
  while (current_ptr)
    {
      if (strcmp(current_ptr->key, key) == 0)
	{
	  return (current_ptr->value);
	}
      current_ptr = current_ptr->next;
    }
  return (NULL);
}
