#include "main.h"

/**
 * charac_func - a handler function for characters.
 * @ap: a variable of type va_list.
 * Return: return count.
 */

int charac_func(va_list ap)
{
	int count = 0;
	char ch;

	ch = va_arg(ap, int);
	count = _putch(ch);

	return (count);
}

/**
 * integer_func - a handler function for functions.
 * @ap: a variable of type va_list;
 * Return: count.
 */

int integer_func(va_list ap)
{
	int count = 0, num;

	num = va_arg(ap, int);
	count = print_num(num, 0);

	return (count);
}

/**
 * string_func - a handler function for strings.
 * @ap: a variable of type va_list.
 * Return: return count.
 */

int string_func(va_list ap)
{
	char *str;
	int count = 0, i;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		str = "(nil)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		count += _putch(str[i]);
	}

	return (count);
}

/**
 * integer_Ifunc - a handler function for dec and hex.
 * @ap: a variable of type va_list.
 * Return: return count
 */

int integer_Ifunc(va_list ap)
{
	int count = 0, num;

	num = va_arg(ap, int);
	count = print_num(num, 0);

	return (count);
}
