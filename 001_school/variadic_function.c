#include <stdio.h>
#include <stdarg.h>

int mymy(int arg1, ...)
{
	va_list ap;
	int i;

	va_start(ap, arg1);

	for (i = arg1; i >= 0; i = va_arg(ap, int))
	{
		//return (i);
		printf("%d ", i);
	}
	va_end(ap);
	putchar('\n');
}
int main(void)
{
	mymy(23, 12, 56);
	mymy(1, 3, 5, 6, 8);

	return (0);
}
