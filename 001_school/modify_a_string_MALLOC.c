#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Here, we want to use Melloc to solve the Memory problem of fixed memory
 * Now, we want to use Allocated memory
 * Return: Always 0;
 */
void ade(void)
{
	char *str;

	//str =  malloc(sizeof(*str));
	str = malloc(sizeof(char));
	str[0] = 'W';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'c';
	str[4] = 'o';
	str[5] = 'm';
	str[6] = 'e';

	printf("%s\n", str);
}
int main(void)
{
	ade();
	return (0);
}
