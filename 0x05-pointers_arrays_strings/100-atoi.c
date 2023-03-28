/**
 * _atoi - converts a string to an integer.
 * @s: string to convert.
 *
 * Return: the integer value of the string.
 */
int _atoi(char *s)
{
int sign = 1, result = 0, i = 0;

while (s[i])
{
if (s[i] == '-')
sign = -sign;
if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
}
i++;
}

return (sign * result);
}
