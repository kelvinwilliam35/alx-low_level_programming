/*
 * File: 1-list_len.c
 * Auth: Kelvin Enohuean
 */

#include "lists.h"

/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t num_of_elem;

	num_of_elem = 0;
	while (h != NULL)
	{
		h = h->next;
		num_of_elem++; }
	return (num_of_elem); }
