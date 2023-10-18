#include "main.h"

/**
 * handler_char - function to convert %s
 * @list: list of arguments
 * Return: integer
*/

int handler_char(va_list list)
{
	int li = printf("%c", va_arg(list, int));

	return (li);
}
