#include "hash_tables.h"

/**
 * key_index - Shows the index at were a key/value
 *      pair must be stored in array of a hash table.
 * @key: The key to get the index of.
 * @size: Is the size of a array of the hash table.
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

