#include "main.h"
/**
 * main - print alphabet in lower case
 * followed by a new line
 * Return: Always 0 (Success)
 * print_alphabet - Entry point
 * Description: print alphabets
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
