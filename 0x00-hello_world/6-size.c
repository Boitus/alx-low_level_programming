#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("char: %i byte (s)\n", sizeof(char));
	printf("int: %i byte (s)\n", sizeof(int));
	printf("int: %i byte(s)\n", sizeof(long int));
	printf("int: %i byte(s)\n", sizeof(long long int));
	printf("float:%i byte(s)\n", sizeof(float));
	return (0);
}
