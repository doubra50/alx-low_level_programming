<<<<<<< HEAD
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that print strings followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * @...: Other parameters
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i = 0;
char *string;
va_start(ap, n);
for (; i < n; i++)
{
string = va_arg(ap, char*);
if (string == NULL)
printf("(nil)");
else
printf("%s", string);
if (separator == NULL)
continue;
if (i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
=======
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints all strings with a separator
 * @separator: separe strings
 * @n: int, number of undefined arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *c;
va_start(list, n);

for (i = 0; i < n; i++)
{
	c = va_arg(list, char*);
	if (c != NULL)
		printf("%s", c);
	else
		printf("(nil)");

	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
}
va_end(list);

putchar('\n');
>>>>>>> fda01d1187df2735aa6c16c26990fe5be19e5790
}
