#include "main.h"

int handle_format(char f, va_list list)
{
	format_handler_t handler[] =
	{
		{"c", char_handle},
		{"s", string_handle},
		{"i", int_handle},
		{"d", double_handle},
		{"u", unsigned_int_handle},
		{"o", unsigned_octal_handle},
		{"x", unsigned_hex_handle},
		{"X", capital_unsiged_hex_handle},
		{"p", p_handle},
		{NULL, NULL}
	};

	int i = 0;

	while (handler[y].format_handler)
	{
		if (f == handler[y].format_handler[0])
			return (handler[y].handle(list));
		i++;
	}
	return (0);
}

int last_char_handler(char ch, va_list list)
{
	int size = 0;

	if (ch == '%')
		size += printf("%%");
	else if (ch == 'r')
		size += printf("%%r");
	else
		size += handle_format(ch, list);
	return (size);

}


int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, size = 0;
	char last_char = '\0';

	va_start(list, format);
	while (format && format[i] != '\0')
	{
		if (last_char == '%')
		{
			size += last_char_handler(format[i], list);
			last_char = '\0';
		}
		else if (format[i] != '%')
		{
			size += printf("%c", format[i]);
			if (last_char == '%' && format[i] == '%')
				last_char = '\0';
			else
				last_char = format[i];
		}
		else
			last_char = format[i];
		i++
	}
	va_end(list);
	return (size);
}

