#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: character string
 * Return: return total number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list list;
	int count = 0, value, num, digit;

	va_start(list, format);
	if (format == NULL)
		return (-1);
	while (*format != '\0') {
    if (*format == '%') {
      switch (*++format) {
        case 'c':
          count += putchar(va_arg(args, int));
          break;
        case 's':
          count += fputs(va_arg(args, char *), stdout);
          break;
        case '%':
          count += putchar('%');
          break;
        default:
          // Ignore unknown format specifiers.
          break;
      }
    } else {
      count += putchar(*format);
    }
    format++;
	}
	va_end(list);
	return (count);
}