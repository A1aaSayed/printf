#include "main.h"
/**
 * unsigned_octal - function
 * @list: arguments
 * Return: int
*/
int unsigned_octal(va_list list)
{
	int li = printf("%o", va_arg(list, int));

	return (li);
}
