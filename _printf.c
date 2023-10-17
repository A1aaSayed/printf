#include "main.h"


int _printf(const char *format, ...)
{
	va_list list;
	int len = 0, i;

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (*format)
	{
	if (format[i] == '%')
	{
		if (format[i + 1] == 'c')
			len += p_char(list);
		else if (format[i + 1] == 's')
			len += p_string(list);
		else if (format[i + 1] == '%')
			len += p_percent();
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			len = p_int(list);
	}
	else
		len += _putchar(format[i]);
	i++;

	}
	va_end(list);
	return (len);
}

