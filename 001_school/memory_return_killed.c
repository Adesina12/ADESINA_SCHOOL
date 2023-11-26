#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
void mal(void)
{
	char *s;

	while (1)
	{
		s = malloc(INT_MAX);
		s[0] = 'H';
	}
}
int main(void)
{
	mal();
	return (0);
}
