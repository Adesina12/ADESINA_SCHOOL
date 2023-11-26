#include <stdio.h>
#include <stdlib.h>

#define POINT_FORMAT "The first is: %d. The second is: %d"

typedef struct point
{
	int x;
	int y;
} mymy;

void process(struct point q)
{
	q.x += 5;
	printf("You can add to the front,"POINT_FORMAT"\n", q.x, q.y);
}

int main(void)
{
	mymy p;
	p.x = 10;
	p.y = 25;

	/**
	 * mymy p = {
	 * 	.x = 10;
	 * 	.y = 25;
	 * };
	 */

	//char buf[100];
	char *buf;

	snprintf(buf, 100, POINT_FORMAT " You can add to any\n", p.x, p.y);
	printf("%s", buf);

	process(p);
	return (0);
}
