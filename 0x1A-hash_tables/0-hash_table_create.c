#include "hash_tables.h"

/**
 *hash_table_create - function that creates a hash table.
 *@size: size is the size of the array
 *Return: Pointer of new table or NUll if Faile
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_Table;

	if (size == 0)
		return (NULL);
	new_Table = malloc(sizeof(hash_table_t));
	if (new_Table == NULL)
		return (NULL);
	new_Table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_Table->array == NULL)
	{
		free(new_Table);
		return (NULL);
	}
	new_Table->size = size;
	return (new_Table);
}
