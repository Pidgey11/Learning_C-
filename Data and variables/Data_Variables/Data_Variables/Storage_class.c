#include <stdio.h>
#include <stdlib.h>
#include <string.h>


const static char companyName[100] = "Signularsight";


int main() {
	static int nEmployees;

	printf("Welcome to the Employee system of %s \n", companyName);
	printf("Please provide a number of employees you want to import: ");

	scanf_s("%d", &nEmployees);

	readEmployees(nEmployees);
	printEmplyees(nEmployees);
}