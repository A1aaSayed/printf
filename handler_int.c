#include "main.h"

/**
 * handler_int - function that convert %s
 * @list: list of arguments
 * Return: integer
*/

int handler_int(va_list list)
{
	int li = printf("%i", va_arg(list, int));

	return (li);
}
