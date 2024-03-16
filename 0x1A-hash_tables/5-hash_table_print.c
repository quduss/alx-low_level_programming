#include "hash_tables.h"
/**
 * get_length - gets length of hash array elements
 * @ht: pointer to the hash table
 * Return: length
 */

unsigned long int get_length(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int i, len = 0;

	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		if (ptr != NULL)
			len++;
	}
	return (len);
}
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, idx = 0, len;
	hash_node_t *ptr;

	if (ht == NULL)
		return;
	len = get_length(ht)
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		if (ptr != NULL)
		{
			if (idx == (len - 1))
			{
				while (ptr)
				{
					printf("\'%s\': \'%s\'", ptr->key, ptr->value);
					if (ptr->next == NULL)
						printf("}\n");
					else
						printf(", ");
					ptr = ptr->next;
				}
			}
			else
			{
				while (ptr)
				{
					printf("\'%s\': \'%s\'", ptr->key, ptr->value);
					printf(", ");
					ptr = ptr->next;
				}
				idx++;
			}
		}
	}
	if (len == 0)
		printf("}\n");
}
