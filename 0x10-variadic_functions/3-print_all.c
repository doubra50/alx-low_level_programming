#include "variadic_functions.h"
<<<<<<< HEAD
#include <stdarg.h>
=======
>>>>>>> fda01d1187df2735aa6c16c26990fe5be19e5790
#include <stdlib.h>
#include <stdio.h>

/**
<<<<<<< HEAD
 * print_all - A function prints anyting.
 * @format: A list of type of arguments passed to the function.
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
va_list ap;
char *temp;
int i = 0;
va_start(ap, format);
while (format == NULL)
{
printf("\n");
return;
}
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%c", (char) va_arg(ap, int));
break;
case 'i':
printf("%d", va_arg(ap, int));
break;
case 'f':
printf("%f", (float) va_arg(ap, double));
break;
case 's':
temp = va_arg(ap, char*);
if (temp != NULL)
{
printf("%s", temp);
break;
}
printf("(nil)");
break;
}
if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
format[i] == 's') && format[(i + 1)] != '\0')
printf(", ");
i++;
}
va_end(ap);
printf("\n");
=======
 * print_int - prints int
 * @list: arguments from print_all
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - prints float
 * @list: arguments from print_all
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_char - prints int
 * @list: arguments from print_all
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_str - prints string
 * @list: arguments from print_all
 */
void print_str(va_list list)
{
	char *s = va_arg(list, char *);

	s == NULL ? printf("(nil)") : printf("%s", s);

}

/**
 * print_all - prints any type
 * @format: arguments to print
 */

void print_all(const char * const format, ...)
{
va_list list;
int i = 0, j = 0;
char *sep = "";

printTypeStruct printType[] = {
	{ "i", print_int },
	{ "f", print_float },
	{ "c", print_char },
	{ "s", print_str },
	{NULL, NULL}
};


va_start(list, format);

while (format && format[i])
{
	j = 0;
	while (j < 4)
	{
		if (*printType[j].type == format[i])
		{
			printf("%s", sep);
			printType[j].printer(list);
			sep = ", ";
			break;
		}
		j++;
	}
	i++;
}

printf("\n");
va_end(list);
>>>>>>> fda01d1187df2735aa6c16c26990fe5be19e5790
}
