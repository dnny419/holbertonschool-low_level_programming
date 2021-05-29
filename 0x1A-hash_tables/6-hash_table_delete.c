#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	size_t i, j;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			for (j = 0; ht->array[i]; j++)
			{
				tmp = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
