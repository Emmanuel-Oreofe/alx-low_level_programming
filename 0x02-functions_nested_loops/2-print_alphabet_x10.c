#include "main.h"
/**
 * main - prints alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i= 0;
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
