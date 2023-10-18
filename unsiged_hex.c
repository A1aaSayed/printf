#include "main.h"
/**
 *unsigned_hex - function
 *@list: list of arguments
 *Return: int
*/
int unsigned_hex(va_list list)
{
	int li = printf("%x", va_arg(list, int));

	return (li);
}
