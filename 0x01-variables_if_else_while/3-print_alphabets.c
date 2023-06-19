#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 Success
 */
int main(void)
{
	int arr;
	char a[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (arr = 0; arr < 52; arr++)
	{
		putchar(a[arr]);
	}
	putchar('\n');
	return (0);
}
