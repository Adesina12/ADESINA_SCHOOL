#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t mymy;
	mymy = getpid();

	printf("%u\n", mymy);
	return (0);
}
