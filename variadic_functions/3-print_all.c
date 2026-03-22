#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * struct printer - maps a format character to a print function
 * @symbol: format character (c, i, f, s)
 * @print: function pointer to print that type
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list args);
} printer_t;

/* Print functions for each type */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything based on format string
 * @format: list of types of arguments passed to the function
 *
 * Description:
 *  c: char
 *  i: integer
 *  f: float
 *  s: string (prints (nil) if NULL)
 *  Other characters are ignored
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *sep = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (funcs[j].symbol != NULL)
		{
			if (format[i] == *(funcs[j].symbol))
			{
				printf("%s", sep);
				funcs[j].print(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
