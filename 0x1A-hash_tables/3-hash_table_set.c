#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update
 * @key: is the key
 * @value:the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *newNode = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] && !(equalElement(key, ht->array[idx], value)))
		return (1);

	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	if (!(newNode->key) || !(newNode->value))
	{
		if (newNode->key)
			free(newNode->key);
		free(newNode);
		return (0);
	}
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;
	return (1);
}

/**
 *equalElement - Check if a key value is already in a bucket.
 * @key: key
 * @arry: bucket
 * @value: node value to update
 * Return: 1(No match) 0(Match)
 */
int equalElement(const char *key, hash_node_t *arry, const char *value)
{
	hash_node_t *element = arry;

	while (element)
	{
		if (!(strcmp(element->key, key)))
		{
			free(element->value);
			element->value = strdup(value);
			return (0);
		}
		element = element->next;
	}
	return (1);
}
