#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: pointer to the key string
 * @size: size of the array of the hash table
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ki;

	ki = hash_djb2(key) % size;
	return (ki);
}
