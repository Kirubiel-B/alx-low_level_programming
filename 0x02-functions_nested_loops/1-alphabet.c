#include "main.h"
/**
 * print_alphabet - print all lowercase alphabets
 *
 * Return: 0 Always Success
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
