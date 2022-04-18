#include "main.h"
/**
 * main - prints alphabet 10 times
 * Return: void
 * print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
       	int i = 0;

	 while (i < 10)
	 {
	        char c;

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
