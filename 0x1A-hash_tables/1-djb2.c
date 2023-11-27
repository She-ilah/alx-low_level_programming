#include "hash_tables.h"

/**
 * hash_djb2 - Function generates a random number
 * @str: String
 * Return: Hash number upon success
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int n;

	hash = 5381;
	while ((n = *str++))
	{
		hash = ((hash << 5) + hash) + n;
	}
	return (hash);
}
