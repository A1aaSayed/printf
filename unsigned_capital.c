#include "main.h"

/**
 * handler_unsigned- function to handle unknown handler
 *@list: list of arguments
 *Return: int
 */
int handler_unsigned(va_list list)
{
	int li = printf("%X", va_arg(list, int));

	return (li);
}
