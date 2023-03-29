#include "main.h"
/**
* _sprintf - convert integer to string
* @num: integer
* Return: converted string
*/
char *_sprintf(int num)
{
    char *str;
    int i, cnt, j;
    int negative;

    if (num == 0)
        return ("0");

    negative = 0;
    if (num < 0)
    {
        num *= -1;
        negative = 1;
    }

    cnt = 0;
    for (i = 0; _pow(10, i) <= num; i++)
        cnt++;

    if (negative == 1)
        str = malloc(cnt + 1);    
    else
        str = malloc(cnt);
    if (str == NULL)
        return (NULL);
    
    j = 0;
    if (negative == 1)
    {
        str[0] = '-';
        j++;
    }
    
    for (i = cnt; i > 0; i--, j++)
        str[j] = (num % _pow(10, i) / _pow(10, i - 1)) + 48;
    
    str[j] = '\0';
    
    return (str);
}
