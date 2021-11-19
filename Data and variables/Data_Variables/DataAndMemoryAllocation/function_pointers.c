#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Person {
	char* name;
	int age;
	void(*greeting)();
}Person;

void say_english_greeting();
void say_spanish_greeting();
//This needs to be compiled with a parameter defining a language used!!
/*
int main(int argc, char* argv[]) {
	void (*greeting)();

	if (argc > 1) {
		greeting = !strcmp("spanish", argv[1]) ? &say_spanish_greeting : &say_english_greeting;
	}
	else {
		printf("Please pass a greeting argument!\n");
	}

	Person fred = { "Fred", 20, greeting };
	fred.greeting();
}
*/
void say_english_greeting() {
	printf("Hello!\n");
}

void say_spanish_greeting() {
	printf("Hola!\n");
}