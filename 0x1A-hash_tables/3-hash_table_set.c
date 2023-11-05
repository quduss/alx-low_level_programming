#include "hash_tables.h"
/**
 * add_hash_beginning - adds new hash_node_t to the beginning of list
 * @key: key
 * @value: value associated with key
 * @ht: pointer to the hash table
 * Return: new hash_node if successful or NULL otherwise
 */
hash_node_t *add_hash_beginning(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ki = key_index((unsigned char *)key, ht->size);
	hash_node_t *ptr = malloc(sizeof(hash_node_t));

	if (ptr == NULL)
		return (NULL);
	ptr->key = strdup(key);
	ptr->value = strdup(value);
	ptr->next = ht->array[ki];
	ht->array[ki] = ptr;
	return (ptr);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: key
 * @value: value associated with key
 * Return: 1 if success or 0 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ki;
	hash_node_t *head, *ptr;

	if (strlen(key) == 0)
		return (0);
	ki = key_index((unsigned char *)key, ht->size);
	head = ht->array[ki];
	if (head == NULL)
	{
		ptr = add_hash_beginning(ht, key, value);
		if (ptr == NULL)
			return (0);
		return (1);
	}
	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			head->value = strdup(value);
			return (1);
		}
	}
	ptr = add_hash_beginning(ht, key, value);
	if (ptr == NULL)
		return (0);
	return (1);
}
