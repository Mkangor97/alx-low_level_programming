#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @head: pointer to head pointer of doubly linked list
 * @idex: index to insert new node
 * @n: new node's data
 * Return: address of new node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idex,
		int n)
{

	unsigned int i = 0;
	dlistint_t *new_node, *tmp;

	if (head == NULL)
		return (NULL);

	while ((i < index) && head != NULL)
	{
		head = head->next;
		i++;
	}

	if (i == index)
		return (head);

	return (NULL);
}
