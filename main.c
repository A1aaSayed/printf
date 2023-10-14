#include "main.h"
#include <stdio.h>

/***/

int main(void)
{
	int n = 10;
	char *ptr = "printf";

	int out = _printf("value of n is %d\n", n);
	printf("The number of characters printed is %d\n", out);
	out = _printf("The string is %s\n", ptr);
	out = _printf("The percent sign is %%\n");
	return (0);
}
