#include <stdio.h>
#include <stdbool.h>

int arithemticOperation(int val1, int val2, char operator);

int main() {
	const int nEmployees = 10;
	int salaries[10] = { 3434 , 23231, 23432, 8976, 6567, 34690, 8907, 5689, 3456, 9876 };
	int bonus = 1000;
	float salaryIncrease = 1.15;

	for (int i = 0; i < nEmployees; i++) {
		int salary = salaries[i];
		int finalSalary = arithemticOperation(salary, bonus, '+');

		if (finalSalary < 30000) {
			finalSalary *= salaryIncrease;
			printf("Orignal salary = %d, salary after increase = %d (Raised) \n", salary, finalSalary);
		}
		else
		{
			printf("Original salary = %d, salary after increase = %d \n", salary, finalSalary);
		}
	}
}

int arithemticOperation(int val1, int val2, char operator) {
	int result = 0;
	switch (operator){
	case '+':
		result = val1 + val2;
		break;
	case '-':
		result = val1 - val2;
		break;
	case '*':
		result = val1 * val2;
		break;
	case '/':
		result = val1 / val2;
		break;
	case '%':
		result = val1 % val2;
		break;
	default:
		break;
	}
	return result;
}