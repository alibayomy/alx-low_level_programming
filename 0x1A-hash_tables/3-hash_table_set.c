#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table u want to add or update
 * @key: the key and cannot be an empty string
 * @value: value associated with the key
 * Return: 1 on success, else 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int position, i;
	hash_node_t *new_node;
	char *new_value, *new_key;

	if (key == NULL || ht == NULL || value == NULL || *key == '\0')
		return (0);
	new_value = strdup(value);
	position = key_index((const unsigned char *)key, ht->size);
	for (i = position; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			ht->array[i]->value = new_value;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_value);
		return (0);
	}
	new_key = strdup(key);
	new_node->key = new_key;
	new_node->value = new_value;
	new_node->next = ht->array[position];
	ht->array[position] = new_node;
	return (1);
}
