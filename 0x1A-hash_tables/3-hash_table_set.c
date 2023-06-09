#include "hash_tables.h"

/**
 * hash_table_set - Hash table function
 * @ht: pointer to start of table
 * @key: key value of element
 * @value: value of key element
 *
 * Description: add an element to the hash table
 * Return: 1 for success or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *p = NULL, *node = NULL;
	unsigned long int index;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	p = ht->array[index];

	while (p)
	{
		if (strcmp(p->key, key) == 0)
		{
			free(p->value);
			p->value = strdup(value);
			return (1);
		}
		p = p->next;
	}


	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (0);
	}

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
