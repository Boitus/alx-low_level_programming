#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("char: %d byte (s)\n", sizeof(char));
	printf("int: %d byte (s)\n", sizeof(int));
	printf("int: %d byte(s)\n", sizeof(long int));
	printf("int: %d byte(s)\n", sizeof(long long int));
	printf("float:%d byte(s)\n", sizeof(float));
	return (0);
}
