#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a node node at position
 * @h: pointer
 * @idx: place to add node.
 * @n: new node data.
 * Return: address of new node, or null if fail
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux_node = *h, *new_node;
	unsigned int index, cont = 0;


	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;


	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}


	index = idx - 1;
	while (aux_node && cont != index)
	{
		cont++;
		aux_node = aux_node->next;
	}


	if (cont == index && aux_node)
	{
		new_node->prev = aux_node;
		new_node->next = aux_node->next;
		if (aux_node->next)
			aux_node->next->prev = new_node;
		aux_node->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}