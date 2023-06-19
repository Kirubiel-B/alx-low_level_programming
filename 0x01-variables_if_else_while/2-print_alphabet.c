#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 Success
 */
int main(void)
{
	int arr;
	const char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";

	for (arr = 0; arr < 26; arr++)
	{
		putchar(alphabets[arr]);
	}
	putchar('\n');
	return (0);
}
