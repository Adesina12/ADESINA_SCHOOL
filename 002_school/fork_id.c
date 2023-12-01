// fork();

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	printf("Before fork\n");
	int mymy = fork();
	printf("After fork. The ID is: %d\n", mymy);
	printf("The second one. The ID is: %d\n", mymy);

	return (0);
}
