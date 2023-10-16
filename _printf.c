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
	while (format && *format)
	{
		if (*format != '%')
			count += write(1, format, 1);
		else
		{
			format++;
			if (!*format)
				break;
			if (*format == 'c' || *format == 'd' || *format == 'i')
			{
				char ch = (*format == 'c') ? va_arg(list, int) : 0;
				int value = va_arg(list, int);
				if (*format == 'd' || *format == 'i')
					count += (value < 0) ? write(1, "-", 1) : 0;
				count += write(1, &ch, 1) + print_number(value);
			}
			else if (*format == 's')
				count += print_string(va_arg(list, char *));
			else if (*format == '%')
				count += write(1, "%%", 1);
		}
		format++;
	}
	va_end(list);
	return (count);
}
