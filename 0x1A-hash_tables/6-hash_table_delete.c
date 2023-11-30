#include "hash_tables.h"
/**
 * hash_table_delete - This deletes ht
 * @ht: hash table
 * Return: void
 * Created by: Omar El-Sakka
 */
void hash_table_delete(hash_table_t *ht)
{
  hash_node_t *next_ptr;
  unsigned long i;

  if (!ht || !ht->array || ht->size == 0)
    return;
  for (i = 0; i < ht->size; i++)
    {
      while (ht->array[i])
	{
	  next_ptr = ht->array[i]->next_ptr;
	  free(ht->array[i]->key);
	  free(ht->array[i]->value);
	  free(ht->array[i]);
	  ht->array[i] = next_ptr;
	}
    }
  free(ht->array);
  ht->array = NULL;
  ht->size = 0;
  free(ht);
}
