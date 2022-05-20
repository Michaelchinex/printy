#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * _printf - prints formatted data to stdout
 * @format: string that contains the format to print
 * Return: number of characters written
 */

int _printf(const char * const format, ...)
{
	va_list args;
	int i = 0, x = 0, output = 0;
	char *ptr = NULL;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			output++;
		}
		else
		{
			/* format[i] == '%' */
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				output++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				ptr = va_arg(args, char *);
				while (ptr[x] != '\0')
				{
					_putchar(ptr[x]);
					output++;
					x++;
				}
			}
			else if (format[i + 1] == '%')
			{
				output++;
				i++;
				_putchar('%');
			}
		}
		i++;
	}
	va_end(args);
	return (output);
}
