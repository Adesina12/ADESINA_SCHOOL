#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * Here, the memory that stores the string is only readable
 * because we used pointer. It can not be modified
 * Return: Always 0;
 */
void ade(void)
{
	char *src = "Olagunju";
	char *str = malloc(sizeof(char) * strlen(src));
	strcpy(str, src);

	str[0] = 'W';
	

	printf("%s\n", str);
}
int main(void)
{
	ade();
	return (0);
}
