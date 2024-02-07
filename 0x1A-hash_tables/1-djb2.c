#include "hash_tables.h"

/**
 * hash_djb2 - Is the Hash fuction implementing the djb2 algorithm.
 * @str: Is a string to hash.
 *
 * Return: Must calculated hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}

