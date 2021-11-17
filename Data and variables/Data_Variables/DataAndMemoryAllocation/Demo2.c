#include<stdlib.h>
#include<stdio.h>

typedef struct Person {
	int age;
	char* name;
} Person;

//example to show potential errors with dynamic memory
/*
int main() {

	//Dangling pointer
	Person* person1 = (Person*)malloc(sizeof(Person));

	person1 = NULL;
	//Double frees
	Person* person2 = (Person*)malloc(sizeof(Person));

	free(person2);
	free(person2); //can be assigned to null to avoid it

	//no size_of
	int* int_ptr = (int*)malloc(2); //2 bytes instead of 2 ints 

	free(int_ptr);
	//Null pointer returned from malloc
	char* name = (char*)malloc(100000);
	*name = 'A';

	return 0;
}
*/