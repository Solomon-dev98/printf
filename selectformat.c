#include "main.h"

/**
 * selectformat - a function pointer.
 * @ch: a variable.
 * Return: return 0
 */

int (*selectformat(char ch))(va_list ap)
{
	switch (ch)
	{
		case 'c':
			return (&charac_func);
		case 'd':
			return (&integer_func);
		case 's':
			return (&string_func);
		case 'i':
			return (&integer_Ifunc);
		default:
			break;
	}

	return (0);
}
