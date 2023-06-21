#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: 0 Success
 */
void times_table(void)
{
int i;
int j;
int x;
int fd;
int ld;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
x = i * j;
if (j > 0)
{
if (x > 9)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
if (x > 9)
{
fd = x / 10;
ld = x % 10;
_putchar(fd + '0');
_putchar(ld + '0');
}
else
{
_putchar(x + '0');
}
}
_putchar('\n');
}
}
