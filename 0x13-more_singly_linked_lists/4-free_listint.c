/*
 * File: 4-free_listint.c
 * Auth: Kelvin Enohuean
 */

#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr, *temp;

	ptr = head;
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp); }}
