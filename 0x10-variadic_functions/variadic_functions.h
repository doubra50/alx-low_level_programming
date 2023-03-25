<<<<<<< HEAD
#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int _putchar(char c);
=======
#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

>>>>>>> fda01d1187df2735aa6c16c26990fe5be19e5790
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
<<<<<<< HEAD
=======
int _putchar(char c);

void print_int(va_list list);
void print_float(va_list list);
void print_char(va_list list);
void print_str(va_list list);

/**
 * struct printTypeStruct - structure definition of a printTypeStruct
 * @type: type
 * @printer: function to print
 */
typedef struct printTypeStruct
{
char *type;
void (*printer)(va_list);
} printTypeStruct;

>>>>>>> fda01d1187df2735aa6c16c26990fe5be19e5790
#endif
