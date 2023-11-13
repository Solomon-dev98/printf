#include "main.h"

/**
 *print_num - function name
 *@j: first parameter
 *@count : second parameter
 *Return: the increamented value of j
 */
int print_num(long int j, int count)
{
	if (j < 0)
	{
		_putch('-');
		count++;
		j = j * -1;
	}
	if (j / 10)
	{
		count = print_num(j / 10, count);
	}
	_putch(j % 10 + '0');

	return (count + 1);
}
