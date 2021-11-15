#include <stdlib.h>
#include <stdio.h>

int main() {
	int number_count = 4;
	//allocate a block of memory on the heap  for four ints using malloc
	int* my_numbers_ptr = (int*)malloc(number_count * sizeof(int));
	printf("Address of malloc'd block of memory %p \n", my_numbers_ptr);

	for (int i = 0; i < number_count; i++)
	{
		*(my_numbers_ptr + i) = i;
		printf("Added value %d to address: %p \n", i, my_numbers_ptr + i);
	}

	printf("\n\n");
	//allocate a block of memory on the heap and fill it with zeros using calloc
	int* my_other_numbers_ptr = (int*)calloc(number_count, sizeof(int));
	printf("Address of calloc'd block of memory: %p \n", my_other_numbers_ptr);

	for (int i = 0; i < number_count; i++) {
		printf("Value in calloc'd address should be 0: %d \n", *(my_numbers_ptr + i));
		*(my_other_numbers_ptr + i) = i;
	}

	//add/remove space to/from our malloc'd and calloc'd block of memories
	my_numbers_ptr = (int*)realloc(my_numbers_ptr, (number_count + 2) * sizeof(int));
	printf("Show the values 0 to 5 for a total of 6 ints for this resized block of memory \n");

	for (int i = 0; i < number_count + 2; i++) {
		if (i == number_count || i == number_count + 1) {
			*(my_numbers_ptr + i) = i;
		}
		printf("Value in realloc'd block: %d\n", *(my_numbers_ptr + i));
	}
	printf("\n\n");

	my_other_numbers_ptr = (int*)realloc(my_other_numbers_ptr, (number_count - 2) * sizeof(int));

	printf("The following code should only show the values 0 and 1 for the resized block of memory\n");
	for (int i = 0; i < number_count - 2; i++) {
		printf("Value in realloc'd block: %d\n", *(my_other_numbers_ptr + i));
	}
	//Free memory allocation
	free(my_numbers_ptr);
	free(my_other_numbers_ptr);
}