#include <stdio.h>
/**
 * main - printing double digits
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int y;

	for (i = 0; i < 9; i++)
	{
		for (y = i + 1; y <= 9; y++)
	{
		if (y != i)
	{
		putchar(i + '0');
		putchar(y + '0');
		if (i == 8 && y == 9)
		continue;
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
