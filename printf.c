#include "main.h"

/**
* _printf - printf function
* @format: formated string
* Return: number of printed characters
*/
int _printf(const char *format, ...)
{
	int cnt, i, j;
	char c;
	char *str;
	va_list types;

	va_start(types, format);
	cnt = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			switch(format[i + 1])
			{
				case 'c':
					c = va_arg(types, char);
					if (c == NULL || c = '')
						cnt--;
					else
						putchar(c);
					i++;
					break;

				case 's':
					str = va_arg(types, char *);
					if (str == NULL || str == '')
					{
						cnt--;
						break;
					}
					for (j = 0; str[j] != '\0'; j++)
					{
						putchar(str[j]);
						cnt++;
					}
					cnt--;
					i++;
					break;

				default:
					putchar(format[i]);
			}
		}
		else
		{
			putchar(format[i]);
		}
		cnt++;
	}

	va_end(types);

	return (cnt);
}
