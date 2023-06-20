#include "putchar.h"
/**
 * main - prints the text _putchar
 *
 * Return: 0 Always Success
 */
int main(void)
{
char ch[8] = "_putchar";
int count;

for (count = 0; count < 8; count++)
{
_putchar(ch[count]);
}
_putchar('\n');
return(0);
}
