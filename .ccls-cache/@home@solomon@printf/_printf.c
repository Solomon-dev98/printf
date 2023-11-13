#include "main.h"

/**
 * _printf - a custom printf function.
 * @format: the format string.
 * @...: an ellispsis
 * Return: count
 */

int _printf(const char *format, ...)
{
	int i, count = 0, val = 0;

	va_list ap;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(ap, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				count += _putch(format[i]);
				continue;
			}
			if (format[i] == 'c' || format[i] == 's'
			|| format[i] == 'd' || format[i] == 'i')
			{
				val = selectformat(format[i])(ap);
				if (val < 0)
					return (-1);
				count += val;
			}
			else
			{
				count += _putch('%');
				count += _putch(format[i]);
			}
		}
		else
		{
			count += _putch(format[i]);
		}
	}
	return (count);
}
