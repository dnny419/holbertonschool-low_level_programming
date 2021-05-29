#include "hash_tables.h"
/**
 * hash_table_get - function that prints a hash table
 * @ht: hash table you want to look into
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t i = 0, j = 0, sep = 0;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL)
		return;

	for (; i < ht->size; i++)
	{
		if (i == 0)
		{
			printf("{");
		}

		tmp = ht->array[i];
		for (; tmp != NULL; j++)
		{
			if (sep != 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			sep++;
		}
	}
	printf("}\n");
}
