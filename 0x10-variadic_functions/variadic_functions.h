#ifndef _VARIADIC_FUNCTION_H
#define _VARIADIC_FUNCTION_H
/*
 * File : Variadic_function.h
 * Auth : Emmanuel
 * Desc : Header file containing prototypes for all functions
 * used in the 0x0F-variadic_functions directory.
 */

#include <stdarg.h>
/*
 * struct printer - A new struct type defining a printer
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 * a data type corresponding to symbol.
 */

typedef struct printer /* struct printer - A new struct type */
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
#endif
