#include <stdio.h>
#include "../include/stringsjustlikepython.h"

int main(void) {
	char *sentense;

	printf("> ");
	fgets(sentense, 50, stdin);

	sentense[length(sentense) - 1] = '\0';

	int size;
	char **arr = split(sentense, &size);

	for (int i = size; i >= 0; i--)
		printf("%s ", arr[i]);
	
	printf("\n");

	return 0;
}
