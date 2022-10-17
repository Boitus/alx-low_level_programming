#include <stdlib.h>
#include <stdio.h>
/**
 * main - Function
 * Return: 0
 */
int main(void)
{
	int i;
	char k;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (k = 'a'; k <= 'f'; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
