#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash table to look into
 * @key: key to look for
 * Return: value associated or NULL if key couldn'tbe found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ki;
	hash_node_t *head;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);
	ki = key_index((unsigned char *)key, ht->size);
	head = ht->array[ki];
	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (strcmp(head->key, key) == 0)
			return (strdup(head->value));
		head = head->next;
	}
	return (NULL);
}
