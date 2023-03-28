#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 *
 * Description: This function reverses a string.
 *
 * Return: void
 */
void rev_string(char *s)
{
int length, c;
char *begin, *end, temp;

length = _strlen(s);
begin  = s;
end    = s;

for (c = 0; c < length - 1; c++)
end++;

for (c = 0; c < length / 2; c++)
{
temp   = *end;
*end   = *begin;
*begin = temp;

begin++;
end--;
}
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string to get its length
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;

return (len);
}
