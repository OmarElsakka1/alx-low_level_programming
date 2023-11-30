#include "hash_tables.h"
/**
 * hash_table_print - prints ht
 * @ht: hash table
 * Return: void
 * Created by: Omar El-Sakka
 */

void hash_table_print(const hash_table_t *ht)
{
  unsigned long i;
  hash_node_t *current_ptr;
  int flag = 0;

  if (!ht || !ht->array || ht->size == 0)
    return;

  printf("{");
  for (i = 0; i < ht->size; i++)
    {
      current_ptr = ht->array[i];
      if (current_ptr)
	{
	  while (current_ptr)
	    {
	      if (flag == 1)
		printf(", ");
	      printf("'%s': '%s'", current_ptr->key, current_ptr->value);
	      flag = 1;
	      current_ptr = current_ptr->next;
	    }
	}
    }
  printf("}\n");
}
