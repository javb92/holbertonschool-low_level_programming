#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_node_end - put new tail
 *@head: head
 *@str: string.
 *Return: address.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new_tail = malloc(sizeof(list_t));
	list_t *head2 = *head;

	if (new_tail == NULL)
	{
		free(new_tail);
		return (0);
	}
	for (i = 0 ; *(str + i) != '\0' ; i++)
	{
	}
	new_tail->str  = strdup(str);
	new_tail->len = i;
	new_tail->next = NULL;
	if (*head == NULL)
	{
		*head = new_tail;
		return (*head);
	}
	while (head2->next != NULL)
	{
		head2 = head2->next;
	}
	head2->next = new_tail;
	return (*head);
}
