#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct type - Struct type which includes a char * and a function pointer
 *
 * @type: pointer to data types
 * @f: The function associated to print each data type
 */
typedef struct type
{
	char *type;
	void (*f)(va_list i);
} print_type;

void print_char(va_list i);
void print_int(va_list i);
void print_float(va_list i);
void print_string(va_list i);

void print_all(const char * const format, ...);
#endif
