#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *str = "I am %d years old\n";

	printf(str, 23);
	return (0);
}
