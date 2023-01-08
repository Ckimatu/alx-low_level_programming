#include "hash_tables.h"

/**
 * key_index - finds the index where the key element is stored
 * @key: the key
 * @size: the size of the array
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
