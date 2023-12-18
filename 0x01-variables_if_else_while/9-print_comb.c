#include <stdio.h>
/**
 * main - Printing single digits
 *
 * Return: 0 when successful
 */
int main(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		putchar(j + '0');
		if (j != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
