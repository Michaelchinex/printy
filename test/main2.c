#include "../main.h"
#include <stdio.h>

int main(void)
{
	int n = 0;
	_printf("Hello %c Rofiat\n", 'A');
	printf("Hello %c Rofiat\n", 'A');
	_printf("Hello %s Rofiat\n", "World");
	printf("Hello %s Rofiat\n", "World");
	n = _printf("%%\n");
	printf("%d\n", n);
	n = printf("%%\n");
	_printf("%d\n", 12);
	printf("%d\n", 12);
	printf("%d\n", n);
	_printf("%s %s %c %s %i %d %% %d\n", "Hello", "World", 'a', "ggggg", 9, 7, -4566);
	printf("%s %s %c %s %i %d %% %d\n", "Hello", "World", 'a', "ggggg", 9, 7, -4566);

	return (0);
}
