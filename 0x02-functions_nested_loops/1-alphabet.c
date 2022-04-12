#include "main.h"
/**
 * main - print alphabet in lower case
 * followed by a new line
 * Return: Always 0 (Success)
 */

void print_alphabet(void) /*declared here*/ 
{
	char c = 'a';

	while (c <= 'z');
	{
		_putchar('\n');  
		c++;
	}
        return (c); 
}
