#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

struct employee {
	uint8_t employeeNro;
	char name[200];
	float salary;
	int age : 7;
	struct  tm dob;
};

const char companyName[100] = "Singularsight";

void readEmployees(struct  employee* employees, int nEmployees);
void printEmplyees(struct employee employees[100], int nEmplyees);

int main(void) {
	struct employee employees[100];
	int nEmployees;

	printf("Welcome to the company %s \n", companyName);
	printf("Please provide the number of employees ");

	scanf("%d", &nEmployees);

	readEmployees(employees, nEmployees);
	printEmplyees(employees, nEmployees);


	return 0;
}

void readEmployees(struct  employee* employees, int nEmployees) {
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
		/* If the birthday did not come in the current year
		//We need to decrease a year by -1
		if (currTime-> tm_mon < dobObj.tm_mon ||
			(currTime->tm_mon == dobObj.tm_mon && currTime->tm_mday < dobObj.tm_mday)){
			employees[i].age--;
	}
	*/
		employees[i].dob = dobObj;

	
	}
	}

void printEmplyees(struct employee employees[100], int nEmplyees) {
	printf("\n");
	setlocale(LC_ALL, "");
	struct lconv* currenLocale = localeconv();

	printf("Printing employees list \n");
	for (int i = 0; i < nEmplyees; i++) {
		struct employee emp = employees[i];
		printf("Name: %s Employee nmbr : %d Solary: %.2f%s DOB %02d/%02d/%d Age: %d\n", emp.name, emp.employeeNro, emp.salary, currenLocale->int_curr_symbol,
			emp.dob.tm_yday, emp.dob.tm_mon, emp.dob.tm_year+1900, emp.age);
	}
}