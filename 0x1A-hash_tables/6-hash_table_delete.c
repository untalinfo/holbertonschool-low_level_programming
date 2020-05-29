#include "hash_tables.h"
/**
 * hash_table_delete - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value
 * Return: 1 if it succeeded, 0 otherwise
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;

	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			free(ht->key);
			free(ht->value);
		}
		index++;
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
