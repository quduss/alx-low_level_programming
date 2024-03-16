#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer to the corresponding hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *ptr, *temp;

	if (!ht)
		return;
	if (!(ht->array))
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		if (ptr != NULL)
		{
			while (ptr)
			{
				temp = ptr->next;
				free(ptr->value);
				free(ptr->key);
				free(ptr);
				ptr = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
