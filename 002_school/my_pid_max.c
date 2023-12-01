//32768

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t max_pid;
	max_pid = 32768;

	printf("%u\n", max_pid);

	return (0);
}
