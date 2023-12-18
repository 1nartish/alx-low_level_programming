#include <stdio.h>
/**
 * main - Combination of two digits
 *
 * Return: 0 when successful
 */
int main(void)
{
	int i, y;

	for (i = 0; i < 98; i++)
	{
	for (y = i + 1; y <= 99; y++)
	{
	putchar((i / 10) + '0');
	putchar((i % 10) + '0');
	putchar(' ');
	putchar((y / 10) + '0');
	putchar((y % 10) + '0');
	if (i == 98 && y == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
