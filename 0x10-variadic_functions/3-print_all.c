#include "variadic_functions.h"

/**
 * format_char - E
 * @separator: ..
 * @ap: ..
 */
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}
/**
 * format_int - E
 * @separator: ..
 * @ap: ..
 */
void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}


/**
 * format_float - E
 * @separator: ..
 * @ap: ..
 */
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_string - E
 * @separator: ..
 * @ap: ..
 */
void format_string(char *separator, va_list ap)
{
	char *a = va_arg(ap, char *);

	switch ((int)(!a))
	case 1:
		a = "(nil)";
	printf("%s%s", separator, a);
}


/**
 * print_all - E
 * @format: ..
 * Retun: void.
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;
	ahmed_t token[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (token[j].token)
		{
			if (format[i] == token[j].token[0])
			{
				token[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
