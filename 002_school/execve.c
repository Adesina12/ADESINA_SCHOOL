#include <stdio.h>
#include <unistd.h>

int main(void)
{
// int execve(const char *filename, char *const argv[], char *const envp[]);
	
	char *argv[] = {"/bin/ls", "-l", NULL};
	int val = execve(argv[0], argv, NULL);

	if (val == -1)
		perror("Error");

	printf("Done with execve");

	return (0);
}
