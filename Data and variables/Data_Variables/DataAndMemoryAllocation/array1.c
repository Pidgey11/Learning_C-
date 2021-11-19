#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#define ARRAY_SIZE 4

typedef struct Person {
	int age;
	int id;
} Person;

int main(int argc, char* argv[]) {
	int numbers[] = { 1,2,3,4 };
	const double floats[] = { 1.23 , 1.45, 1.67, 1.89 };
	char name[] = "Zach";

	const Person people[] = {
		{27,1},
		{45,2}
	};

	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("\n Numbers: %d\n", numbers[i]);
		numbers[i] += 2;
	}

	assert(numbers == &numbers[0]);

	printf("Starting address of 'numbers' array by array name: %p\n", numbers);
	printf("Starting address of 'numbers' array by pointer to the first element: %p\n", &numbers[0]);
}
