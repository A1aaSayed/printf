#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: character string
 * Return: return total number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list list;
	int count = 0;

	va_start(list, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format != '%')
			write(1, format, 1);
		format++;
	}
	return (count);
	va_end(list);
}
