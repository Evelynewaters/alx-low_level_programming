#include "hash_tables.h"
/**
* hash_table_print - it prints the hash table
* @ht: the hash tables
* Return: dictionary with format of hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temporal;
	int first = 1;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
		for (temporal = ht->array[index]; temporal; temporal = temporal->next)
		{
			if (first)
			{
				printf("'%s': '%s'", temporal->key, temporal->value);
				first = 0;
			}
			else
				printf(", '%s': '%s'", temporal->key, temporal->value);
		}
	printf("}\n");
}
