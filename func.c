#include "main.h"

/***/

int p_char(va_list list)
{
	_putchar(va_arg(ap, int));
	return (1);
}



/***/

int p_percent(list)
{
	(void);
	return (_putchar('%'));
}

/***/

int p_string(va_list list)
{
	int i, len;
	char *p;

	p = va_arg(list, char *);

	if (!p)
		p = "(null)";
	len = 0;
	while (*ch != '\0')
	{
		_putchar((unsigned char) *ch);
		ch++;
		len++;
	}

	return (len);
}

/***/

int p_int(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
	while (num / 10 != 0)
	{
		exp = exp * 10;
		num = num / 10;
	}
	num = n;
	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		num = num - (digit * exp);
		exp = exp / 10;
		i++;
	}
	}
	_putchar(last + '0');

	return (i);
}


