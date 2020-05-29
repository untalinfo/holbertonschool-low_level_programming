#include "hash_tables.h"
/**
 * hash_table_delete - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value
 * Return: 1 if it succeeded, 0 otherwise
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *tmp2 = NULL;
    unsigned int index = 0;

	if (ht && ht->array)
	{
		while (index < ht->size)
		{
			tmp = ht->array[index];
			while (tmp)
			{
				tmp2 = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = tmp2;
			}
            index++;
		}
		free(ht->array);
		free(ht);
	}
}
