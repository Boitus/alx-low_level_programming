#include <stdlib.h>
#include <stdio.h>
/**
 * main - Function
 * Return: 0
 */
int main(void)
{
	int l;

	for (l = 'a' ; l <= 'z'; l++)
	{
		if (l == 'q' || l == 'e')
		{
			continue;
		}
		putchar(l);
	}
	putchar('\n');
	return (0);
}
