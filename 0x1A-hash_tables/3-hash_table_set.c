#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t finder, i;
	char *new;
	hash_node_t *hash_node, *tmp;

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
					new = strdup(value);
					if (new == NULL)
						return (0);
					free(tmp->value);
					tmp->value = new;
					return (1);
				}
				tmp = tmp->next;
			}
		}
		/** avoid collisions **/
		hash_node = create_node(key, value);
		if (hash_node == NULL)
			return (0);
		hash_node->next = ht->array[finder];
		ht->array[finder] = hash_node;
		return (1);
	}
	else
		return (0);
}
/**
 * create_node - function that creates a new node
 * @key: key for the new node
 * @value: value for the new node
 *
 * Return: new code if it succeeded, NULL otherwise
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	new->next = NULL;
	return (new);
}
