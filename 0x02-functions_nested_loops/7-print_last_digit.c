#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: is the number
 * Return: lastdigit Success
 */
int print_last_digit(int n)
{

int lastdigit;
if (n < 0)
{
n = -n;
}

lastdigit = n % 10;
_putchar(lastdigit + '0');

return (lastdigit);
}
