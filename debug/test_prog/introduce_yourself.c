#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../include/stringsjustlikepython.h"

int main(void)
{
	char *name = malloc(20);
	char *last_name = malloc(20);
	char *phone_num = malloc(11);
	char age[3];

	printf("first name: ");
	scanf("%s", name);

	printf("last name: ");
	scanf("%s", last_name);

	printf("age: ");
	scanf("%s", &age);

	printf("phone number: ");
	scanf("%s", phone_num);

	printf("\nName -> %s\n", capitalize(name));
	printf("Last name -> %s\n", capitalize(last_name));
	
	if (isdecimal(age))
		printf("Age -> %s\n", age);
	else
		printf("Age -> invalid age!");
	
	if (strlen(phone_num) == 11)
		printf("Phone number -> %s\n", phone_num);
	else
		printf("Phone number -> invalid phone number!");

	return 0;
}
