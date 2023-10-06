#include "hash_tables.h"
/**
 * key_index - function that gives the index of the key
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: Returns the index at which the key/value pair
 *			should be stored in the array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result;

	result = hash_djb2(key);
	if (result > size)
		result = result % size;
	return (result);
}
