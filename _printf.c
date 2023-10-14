#include "main.h"

int _printf(const char *format, ...)
{
	va_list list;
	int count = 0, value, num, digit;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 'c')
			{
				char ch = va_arg(list, int);
				write(1, &ch, 1);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list, char*);
				while (*str)
				{
					write(1, str, 1);;
					str++;
					count++;
				}
			}
			else if (*format == '%')
			{
				write(1, "%", 1);
				count++;
			}
			else if (*format == 'd' ||*format == 'i')
			{
				value = va_arg(list, int);
				while (value > 0) 
				{
					num = value % 10;
					digit = '0' + num;
					write(1, &digit, 1);
					value /= 10;
				}
			}
		}
		format++;
	}

	va_end(list);
	return(count);
}
