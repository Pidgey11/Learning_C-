#include<stdlib.h>
#include <stdio.h>
/*
int main() {
	int count = 4;
	int* my_ptr = (int*)malloc(count * sizeof(int));

	for (int i = 0; i < count; i++) {
		printf("'my_ptr' address: %p\n", my_ptr + i);
	}

	int initial_value = 5;
	for (int i = 0; i < count; i++) {
		*(my_ptr + i) = initial_value++;
		printf("'my_ptr' posisition %d value: %d\n", i, *(my_ptr + i));
	}

	int* my_other_ptr = (int*)malloc(count * sizeof(int));

	printf("\n Starting address of malloc'd block: %p\n ", my_other_ptr);

	for (int i = 0; i < count; i++) {
		printf("'my_other_ptr' address: %p\n", my_other_ptr++);
	}

	printf("Still expecting to be the starting address of the block : %p\n", my_other_ptr);
}
*/