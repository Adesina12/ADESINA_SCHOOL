// fork();

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	printf("Before fork\n");
	fork();
	printf("After fork\n");
	printf("The second one\n");

	return (0);
}
