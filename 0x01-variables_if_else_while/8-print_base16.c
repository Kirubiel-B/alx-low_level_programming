#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 Success
 */
int main(void)
{

int n;
char hex[16] = "0123456789abcdef";

for (n = 0; n < 16; n++)
{
putchar(hex[n]);
}
putchar('\n');
return (0);
}
