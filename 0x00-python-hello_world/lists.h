#define LISTS_H
#ifndef LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - Is a singly linked of the lists
 * @n: This functions is a integer
 * @next: Used to point to the second node
 *
 * Description: Ftions thats is a singly linked list to the node structer
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif
