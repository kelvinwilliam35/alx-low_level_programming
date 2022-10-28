/*
 * File: 5-free_listint2.c
 * Auth: Kelvin Enohuean
 */

#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	if (head == NULL)
		return (NULL);
	ptr = *head;
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp); }
	*head = NULL; }
