#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
	int x;
	int y;
} mymy;

int main(void)
{
	mymy p;
	p.x = 10;
	p.y = 25;

	printf("%d %d\n", p.x, p.y);
	return (0);
}
