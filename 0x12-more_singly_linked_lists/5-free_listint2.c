#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *free_listint2 - ver2
 *@head: head
 *Return: address.
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
