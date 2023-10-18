#include "main.h"

/**
 * handler_string - function that convert %s
 * @list: list of arguments
 * Return: int
*/

int handler_string(va_list list)
{
	int li = printf("%s", va_arg(list, char*));

	return (li);
}
