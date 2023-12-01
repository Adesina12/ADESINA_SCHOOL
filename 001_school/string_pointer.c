#include <stdio.h>

/**
 * main - Entry point
 * Here, the memory that stores the string is only readable
 * because we used pointer. It can not be modified
 * Return: Always 0;
 */
int main(void)
{
	char *str;

	str = "Olagunju is here";

	printf("%s\n", str);

	return (0);
}
