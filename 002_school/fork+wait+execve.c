#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	//int execve(const char *fileName, char const* argv[], char const *envp[]);
	int my_wait;
	int mymy = fork();
	if (mymy != 0)
	{
		fork();
		fork();
	}
	if (mymy != 0)
	{
		wait (&my_wait);
	}
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	int val = execve(argv[0], argv, NULL);

	if (val == -1)
	{
		perror("Error");
	}
	else
	{
		printf("Nice\n");
	}

	return (0);
}
