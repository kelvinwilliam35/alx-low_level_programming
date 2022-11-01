/*
 * File: 100-reverse_listint.c
 * Auth: Kelvin Enohuean
 */

#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *reverse;
	listint_t *temp;

	reverse = NULL;
	temp = NULL;
	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = reverse;
		reverse = *head;
		*head = temp; }
	*head = reverse;
	return (*head); }
