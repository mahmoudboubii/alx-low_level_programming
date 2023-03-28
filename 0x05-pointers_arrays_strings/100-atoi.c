#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
int sign = 1, num = 0, started = 0;

while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{
num = num * 10 + (*s - '0');
started = 1;
}
else if (started)
break;
s++;
}

if (sign == -1 && num > INT_MAX)
return INT_MIN;
else if (num < 0)
return -num;
else if (sign == 1 && num < INT_MIN)
return INT_MAX;

return sign * num;
}
