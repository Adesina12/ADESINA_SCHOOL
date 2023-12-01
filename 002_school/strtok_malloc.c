// char *strtok(char *str, const char *delim

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *src  = "This is Adesina";
	char *str = malloc(sizeof(char) * strlen(src));
	const char *delim = " ";
	char *my_token;

	strcpy(str, src);

	my_token = strtok(str, delim);

	while (my_token != NULL)
	{
		printf("%s\n", my_token);
		my_token = strtok(NULL, delim);
	}

	return (0);
}
