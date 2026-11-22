#include <stdarg.h>
#include <stdio.h>

int sum(int c, ...)
{
	va_list arg;
	int i = 0;
	int num = 1;
	va_start(arg, c);
	while (1) {
		if (arg->)
		num = num + 1;
		i++;
	}
	va_end(arg);
	return (num);
}

int main()
{
	printf("number of argumet is : %d", sum(9, 10,10,10,10,10,10,20));
}