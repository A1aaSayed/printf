#include "main.h"

/**
 * handler_double - function that convert %s
 * @list: list of arguments
 * Return: integer
*/

int handler_double(va_list list)
{
	int li = printf("%d", va_arg(list, int));

	return (li);
}
