#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0 Success
 */
int main(void)
{

int count;
char a[26] = "abcdefghijklmnopqrstuvwxyz";

for (count = 25; count >= 0; count--)
{
putchar(a[count]);
}
putchar('\n');
return (0);
}
