#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//getline(char **lineptr, size_t *n, FILE *stream);
	
	printf("What is your name? ");

	size_t n = 10;

	char *lineptr = NULL;
	getline(&lineptr, &n, stdin);

	printf("Welcome %s", lineptr);
	printf("Your buffer number is: %ld\n", n);

	free(lineptr);
	return (0);
}
