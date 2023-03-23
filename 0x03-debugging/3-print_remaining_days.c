#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int i, days_left = 0;

if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
{
days_in_month[2] = 29;
}

if (month < 1 || month > 12)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}

if (day < 1 || day > days_in_month[month])
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}

for (i = 1; i < month; i++)
{
days_left += days_in_month[i];
}

days_left += day;

if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
{
if (month > 2)
{
days_left++;
}
}

printf("Day of the year: %d\n", days_left);
printf("Remaining days: %d\n", (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 366 - days_left : 365 - days_left);
}
