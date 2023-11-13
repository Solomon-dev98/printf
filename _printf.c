#include "main.h"

/**
 * _printf - a custom printf function.
 * @format: the format string.
 * @...: an ellispsis
 * Return: count
 */

int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
	int i, count = 0;

	va_list ap;

	va_start(ap, format);

	if (format == NULL)
		return (-1);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i] + 1  != '\0')
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
				count += selectformat(format[i])(ap);
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
	va_end(ap);
	return (count);
}
