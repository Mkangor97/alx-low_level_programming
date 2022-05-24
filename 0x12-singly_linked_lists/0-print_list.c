#include "main.h"
/**
 * print_list - prints all elements present in list_t list.
i* @h: singly linked list.
 * Return: number of elements available in the list.
 */

size_t print_list(const list_t *h)
{
	size_t elements = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", current->len, current->str);
	current = current->next;
		elements++;
	}
	return (elements);
}
