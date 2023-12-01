#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 2;
	int b = 6;

	printf("The & is: %d\n", a & b);
	printf("The | is: %d\n", a | b);
	printf("The ^ is: %d\n", a ^ b);
	printf("The & is: %d\n", a & b);
	printf("%d\n", a & b && b+1 || 0 && b++);

	return (0);
}
