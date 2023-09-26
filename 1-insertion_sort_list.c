#include "sort.h"
/**
 * swap_node - function that swaps the nodes in a double linked list
 * @h: the head pointer
 * @node_ptr: the current node pointer
 * @temp: the temporary pointer
 *
 * Return: (void) swape nodes
 */
void swap_node(listint_t **h, listint_t **node_ptr, listint_t *temp)
{
	(*node_ptr)->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = *node_ptr;

	temp->prev = (*node_ptr)->prev;
	temp->next = *node_ptr;
	if ((*node_ptr)->prev != NULL)
		(*node_ptr)->prev->next = temp;
	else
		*h = temp;
	(*node_ptr)->prev = temp;
	*node_ptr = temp->prev;
}

/**
 * insertion_sort_list - implementation of insertion sort algorithm
 * @list: list pointer
 *
 * Retrn: (void)
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr, *temp, *node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (node = (*list)->next; node != NULL; node = temp)
	{
		temp = node->next;
		ptr = node->prev;
		while (ptr != NULL && node->n < ptr->n)
		{
			swap_node(list, &ptr, node);
			print_list((const listint_t *)*list);
		}
	}
}
