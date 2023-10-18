#include "main.h"

/**
 * handler_ptr - function that handle ptr
 * @list: list of arguments
 * Return: ptr
*/

int handler_ptr(va_list list)
{
	int li = printf("%p", va_arg(list, void*));

	return (li);
}
