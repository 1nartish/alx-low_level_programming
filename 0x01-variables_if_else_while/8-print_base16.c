#include <stdio.h>
/**
 * main - Numbers of base 16
 *
 * Return: 0 when successful
 */
int main(void)
{
	int i;
	char y;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (y = 'a'; y < 'g'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
