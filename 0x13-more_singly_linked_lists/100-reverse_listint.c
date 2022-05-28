#include "main.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to the address of the head of the linked list
 * Return: a pointer to the first node of the reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead = NULL;
	listint_t *behind = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (*head)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}
	*head = behind;
	return (*head);
}
