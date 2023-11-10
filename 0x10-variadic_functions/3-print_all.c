#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * format_char - formats character
 * @separator: the string seprator
 * @ap: argument pointer
 */
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - formats integer
 * @separator: the string seprator
 * @ap: argument pointer
 */
void format_int(char *separator, va_list ap)
{
	printf("%s%d", va_arg(ap, int));
}

/**
 * format_float - formats float
 * @separator: the string seprator
 * @ap: argument pointer
 */
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_string - prints string
 * @separator: the string seprator
 * @ap: arguments from print_all
 */
void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";

		printf("%s%s", separator, str);

}

/**
 * print_all - prints any type
 * @format: arguments to print
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";

	token_t tokens[] = {
		{ "i", print_int },
		{ "f", print_float },
		{ "c", print_char },
		{ "s", print_str },
		{NULL, NULL}
	};


	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (token[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
