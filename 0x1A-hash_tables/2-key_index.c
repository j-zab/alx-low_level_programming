#include "hash_tables.h"

/**
 * key_index - Gets the index which a key and value
 * pair should be stored in array of a # table.
 * @key: The key's index
 * @size: The array's size in the hash table.
 * Return: The index of the key to be returned
 *
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);

}
