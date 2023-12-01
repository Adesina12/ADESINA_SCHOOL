// fork();

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	printf("Before fork\n");
	int mymy = fork();

	if (mymy == 0)
	{
		printf("This is a child mode. My ID is: %d\n", mymy);
	}
	else
	{
		printf("This is a parent mode. My ID is: %d\n", mymy);
	}
	return (0);
}
