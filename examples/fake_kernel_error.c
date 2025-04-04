#include <stdio.h>
#include <sys/ioctl.h>
#include "../include/stringsjustlikepython.h"

struct winsize sz;

int main(void)
{
	ioctl(0, TIOCGWINSZ, &sz);

	for (int i = 0; i < sz.ws_row / 2; i++)
		printf("\n");

	printf("%s", center("Kernel crashed!", sz.ws_col));

	for (int i = 0; i < sz.ws_row / 2; i++)
		printf("\n");

	return 0;
}
