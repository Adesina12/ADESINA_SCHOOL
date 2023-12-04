#include <stdio.h>
#include <sys/stat.h>

int main(void)
{
	const char *path = "stat.c";
	struct stat buf;

	stat(path, &buf);

	printf("st_mode = %o\n", buf.st_mode);
	return (0);
}
