#include "main.h"

/**
*
*
*/
int _pow(int n, int e)
{
    int i, num;

    if (e == 0)
        return (1);

    num = n;
    for (i = 1; i < e; i++)
        num *= n;

    return (num);
}
