#include <stdio.h>
#include <stdlib.h>

struct point
{
	int x;
	int y;
};

int main(void)
{
	struct point p;
	p.x = 10;
	p.y = 25;

	printf("%d %d\n", p.x, p.y);
	return (0);
}
