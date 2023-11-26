#include <stdio.h>

/**
 * main - Entry point
 * Here, the memory that stores the string is only readable
 * because we used pointer. It can not be modified
 * Return: Always 0;
 */
void ade(void)
{
	char *str;

	str = "Olagunju";
	str[0] = 'W';

	printf("%s\n", str);
}
int main(void)
{
	ade();
	return (0);
}
