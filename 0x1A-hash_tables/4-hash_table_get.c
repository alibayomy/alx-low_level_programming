#include "hash_tables.h"
/**
 * hash_table_get - get the associated value of an element
 * @ht: the given hash table
 * @key: the key
 * Return: the value associated with the element,
 *		or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int position;
	hash_node_t *node;


	if (key == NULL || ht == NULL)
		return (NULL);
	position = key_index((unsigned const char *)key, ht->size);
	if (position >= ht->size)
		return (NULL);
	node = ht->array[position];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	if (node == NULL)
		return (NULL);
	return (node->value);
}
