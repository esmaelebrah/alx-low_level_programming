#include "hash_tables.h"

/**
 * hash_table_get - get key/value
 * @ht: pointer to hash table structure
 * @key: key to match
 *
 * Description: look for key in hash table
 * Return: value associated or NULL if no key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *p = NULL;
	unsigned int index;

	if (ht && key)
	{
		index = key_index((unsigned char *)key, ht->size);
		p = ht->array[index];
		if (p == NULL)
			return (NULL);
		while (strcmp(p->key, key) != 0)
			p = p->next;
		return (p->value);
	}
	return (NULL);
}
