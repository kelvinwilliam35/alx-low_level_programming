/*
 * File: 3-add_nodeint_end.c
 * Auth: Kelvin Enohuean
 */

#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (ptr == NULL)
	{
		*head = new;
		return (*head); }
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
	return (new); }
