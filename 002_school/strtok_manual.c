// char *strtok(char *str, const char *delim

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[]  = "This is Adesina";
	const char *delim = " ";
	char *my_token;

	my_token = strtok(str, delim);
	printf("%s\n", my_token);

	my_token = strtok(NULL, delim);
	printf("%s\n", my_token);

	my_token = strtok(NULL, delim);
	printf("%s\n", my_token);

	return (0);
}
