#include <stdio.h>
/**
 * print all single digit number
 * 10 statting from 0, followed by a new line
 * Return 0 Always (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
