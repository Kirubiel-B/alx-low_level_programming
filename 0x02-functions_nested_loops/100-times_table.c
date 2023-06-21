#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: the number passed that decides the table size
 * Return: void
 */
void print_times_table(int n)
{
int i;
int j;
int x;

if (n <= 15 && n >= 0)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
x = i * j;
if (j > 0)
{
if (x > 99 && x <= 999)
{
_putchar(',');
_putchar(' ');
}
else if (x > 9 && x <= 99)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
}
if (x > 99 && x <= 999)
{
_putchar((x / 100) + '0');
_putchar(((x / 10) % 10) + '0');
_putchar((x % 10) + '0');
}
else if (x > 9 && x <= 99)
{
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
}
else
{
_putchar(x + '0');
}
}
_putchar('\n');
}
}
}
