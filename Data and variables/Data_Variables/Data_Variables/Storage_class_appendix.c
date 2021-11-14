#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

typedef struct{ 
	uint8_t employeeNro;
	char name[200];
	float salary;
	int age : 7;
	struct  tm dob;
} employee;

employee employeesArray[100];
extern void readEmployees(int nEmployees) {
	employee* employees = employeesArray;

	for (int i = 0; i < nEmployees; i++) {
		printf("Processing employee %d \n", i + 1);
		printf("Please provide employee name, number, solary and date of birth(dd/mm/yyyy): ");

		char empName[200];
		int dayDob, monthDob, yearDob;
		scanf("%s %d %f %d%d%d", empName, &employees[i].employeeNro, &employees[i].salary, &dayDob, &monthDob, &yearDob);

		strcpy(employees[i].name, empName);

		struct tm dobObj;
		dobObj.tm_yday = dayDob;
		dobObj.tm_mon = monthDob;
		dobObj.tm_year = yearDob - 1900;

		time_t currTimeSec;
		time(&currTimeSec);
		struct tm* currTime = localtime(&currTimeSec);

		employees[i].age = currTime->tm_year - dobObj.tm_year;

		employees[i].dob = dobObj;
	}
}

extern void printEmplyees (int nEmplyees) {
	printf("\n");
	setlocale(LC_ALL, "");
	struct lconv* currenLocale = localeconv();

	printf("Printing employees list \n");
	for (int i = 0; i < nEmplyees; i++) {
		employee emp = employeesArray[i];
		printf("Name: %s Employee nmbr : %d Solary: %.2f%s DOB %02d/%02d/%d Age: %d\n", emp.name, emp.employeeNro, emp.salary, currenLocale->int_curr_symbol,
			emp.dob.tm_yday, emp.dob.tm_mon, emp.dob.tm_year + 1900, emp.age);
	}
}