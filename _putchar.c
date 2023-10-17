#include "main.h"

/**
 * _putchar - write to the std out
 * @c: char
 * Return: 1 (success)
 * -1 (fail)
*/


int _putchar(char c)
{
	return (write(1, &c, 1));
}

