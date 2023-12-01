#include <stdio.h>

int main(int ac, char **av)
{
	int count = 1;

	printf("The name of the program: %s\n", av[0]);
	while (count < ac)
	{
		printf("%s\n", av[count]);
		count++;
	}
	return (0);
}
