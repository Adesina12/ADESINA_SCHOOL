#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	int mymy = fork();
	int n;
	
	if (mymy == 0)
	{
		n = 1;
	}
	else
	{
		n = 6;
	}

	int i;
	for (i = n; i < n + 5; i++)
	{
		printf("%d ", i);
	}
	putchar('\n');

	return (0);
}
