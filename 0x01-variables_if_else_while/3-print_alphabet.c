#include <stdlib.h>
#include <stdio.h>
/**
 * main - Function
 * Return: 0
 */
int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	while (j = 'a' && j <= 'z')
	{
		putchar(toupper(j));
	}
	putchar('\n');
	return (0);
}
