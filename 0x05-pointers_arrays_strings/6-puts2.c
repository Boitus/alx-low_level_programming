#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * void puts_half - prints one char out of 2 of a string.
 * @str: input string
 * Return: no return
 */
void void puts_half(char str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			putchar('\n');
			break;
		}
		if (count % 2 == 0)
			putchar(str[count];
		count++;
	}
}
