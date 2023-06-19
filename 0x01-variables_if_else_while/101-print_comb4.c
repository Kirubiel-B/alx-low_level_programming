#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0 Success;
 */
int main(void)
{

int n;
int m;
int o;

for (n = 0; n < 8; n++)
{
for (m = 1; m < 9; m++)
{
for (o = 2; o < 10; o++)
{
if (n != m && n < m && m < o)
{
putchar(n + '0');
putchar(m + '0');
putchar(o + '0');
if (n <= 6)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
