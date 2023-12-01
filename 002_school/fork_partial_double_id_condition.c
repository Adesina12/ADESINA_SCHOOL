// fork();

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	printf("Before fork\n");
	int mymy = fork();

	if (mymy != 0)
	{
		fork();
	}
	
	printf("After fork\n");


	return (0);
}
