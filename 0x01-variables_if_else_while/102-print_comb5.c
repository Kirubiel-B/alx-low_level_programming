#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: 0 Success
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = a; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					if (a == c && d <= b)
					{
						continue;
					}
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (a == 9 && b == 8 && c == 9 && d == 9)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
