#include <stdio.h>

/**
 * main - Entry point
 * Here, the memory that stores the sring is both readable and writeable
 * because we used ARRAY
 * Return: Always 0;
 */
void ade(void)
{
	char str[] = "Olagunju";
	str[8] = 'W';

	printf("%s\n", str);
}
int main(void)
{
	ade();
	return (0);
}
