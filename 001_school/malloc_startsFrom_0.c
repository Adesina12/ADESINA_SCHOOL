#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int *array;
	int i;

	array = malloc(20 * sizeof(int));
	i = 0;
	while (i < 20)
	{
		printf("%d", array[i]);
		i++;
	}
	free(array);

	printf("\n");

	return (0);
}
