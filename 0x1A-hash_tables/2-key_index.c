#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: the key itself
 * @size: size of the array that contains it
 * Return: index where the key is stored at
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	size_t finder = hash_djb2(key) % size;

	return (finder);
}
