#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed with a new line.
 * @separator: string that is printed between strings.
 * @n: number of strings passed to the function.
 * @...: variable number of strings to be passed.
 * Description: separator is NULL, it is printed.
 * If one of the strings is NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int x;

	va_start(strings, n);
	for (x = 0; x < n; x++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
