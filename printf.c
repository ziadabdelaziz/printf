#include "main.h"

/**
* _printf - printf function
* @format: formated string
* Return: number of printed characters
*/
int _printf(const char *format, ...)
{
	int cnt, i, j;
	char *str;
	va_list types;

	va_start(types, format);
	cnt = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch(format[i + 1])
			{
				case 'c':
					_putchar(va_arg(types, int));
					break;

				case 's':
					str = va_arg(types, char *);
					for (j = 0; str[j] != '\0'; j++)
					{
						_putchar(str[j]);
						cnt++;
					}
					break;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		cnt++;
	}

	va_end(types);

	return (cnt);
}
