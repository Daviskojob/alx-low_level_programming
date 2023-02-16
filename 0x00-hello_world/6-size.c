#include <stdio.h>
/**
 * main - Entry
 * Return: Always
 */
int main(void)
{
	printf("Size of a char: %lu byte(S)\n", sizeof(char));
	printf("Size of an int: %lu byte(S)\n", sizeof(int));
	printf("Size of a long int: %i byte(S)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(S)\n", sizeof(long long int));
	printf("Size of a foat: %lu byte(S)\n", sizeof(float));
	return (0);
}
