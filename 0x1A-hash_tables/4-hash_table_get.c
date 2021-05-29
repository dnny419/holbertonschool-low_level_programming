#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: value associated with the element or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t finder, i;
	hash_node_t *tmp;

	if (ht && strlen(key) != 0 && ht->size)
	{

		finder = key_index((const unsigned char *)key, ht->size);
		tmp = ht->array[finder];
		if (tmp != NULL)
		{
			for (i = 0; tmp; i++)
			{
				if (strcmp(tmp->key, key) == 0)
				{
					return (tmp->value);
				}
				tmp = tmp->next;
			}
			return (NULL);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
