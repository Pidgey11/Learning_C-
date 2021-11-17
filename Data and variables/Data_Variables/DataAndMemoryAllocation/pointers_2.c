#include <stdlib.h>
#include <stdio.h>

void print_int_by_reference(int* number_ptr);
void print_int_by_value(int number);

void malloc_int_dangerous(int* number_ptr);
void malloc_int_safe(int** number_ptr);

int main() {
	int my_number = 10;

	print_int_by_value(my_number);

	print_int_by_reference(&my_number);

	printf("The addresses printed above should be different! ^^\n\n\n");

	int* number_ptr = &my_number;

	printf("'number_ptr' before malloc: %p\n", number_ptr);


	malloc_int_dangerous(number_ptr);

	printf("The original value of 'number_ptr' address after dangerous malloc: %p\n ", number_ptr);
	printf("The above address of 'number_ptr' does not change!\n ");
}


void print_int_by_reference(int* number_ptr) {
	printf("Printing int =>> address: %p Value= %d Done by reference\n", number_ptr, *number_ptr);
}

void print_int_by_value(int number) {
	printf("Printing int =>> address: %p Value= %d  Done by value\n", &number, number);
}

void malloc_int_dangerous(int* number_ptr) {
	number_ptr = (int*)malloc(sizeof(int));
	printf("[malloc int dangerous] => 'number_ptr' address after malloc: %p\n", number_ptr);
	printf("[malloc int dangerous] => ^^ That number marks a memory-leaked spot\n");
}

void malloc_int_safe(int** number_ptr) {
	*number_ptr = (int*)malloc(sizeof(int));

}