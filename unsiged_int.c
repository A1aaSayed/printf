#include "main.h"
/**
 * unsigned_int - function
 * @list: list of arguments
 * Return: int
*/

int unsigned_int(va_list list)
{
	int li = printf("%u", va_arg(list, int));

	return (li);
}
