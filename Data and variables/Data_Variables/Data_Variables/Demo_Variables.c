#include <stdio.h>

float minimumBasicRateBand = 0;
float maximumBasicRateBand = 12000;
float basicRate = 0.1;

float minimumHigherRateBand = 12000;
float maximumHigherRateBand = 50000;
float higherRate = 0.2;

float minimumMaxRateBand = 50000;
float maximumMaxRateBand = 150000;
float maxRate = 0.4;
/*
int main() {
	float userSalary;
	float taxRateApplied;
	float netSalary;
	float totalTaxesPaid;

	printf("Please specify your salary: ");
	scanf("%f", &userSalary);

	if (userSalary >= minimumBasicRateBand && userSalary < maximumBasicRateBand) {
		taxRateApplied = basicRate;
		netSalary = userSalary * (1 - basicRate);
		totalTaxesPaid = userSalary * basicRate;
	}
	if (userSalary >= minimumHigherRateBand && userSalary < minimumHigherRateBand) {
		taxRateApplied = higherRate;
		netSalary = userSalary * (1 - higherRate);
		totalTaxesPaid = userSalary * higherRate;
	}
	if (userSalary >= minimumMaxRateBand && userSalary < maximumMaxRateBand) {
		taxRateApplied = maxRate;
		netSalary = userSalary * (1 - maxRate);
		totalTaxesPaid = userSalary * maxRate;
	}

	printf("Your net salary is: %.2f \n", netSalary);
	printf("The total taxes paid is %.2f \n", totalTaxesPaid);
	printf("The tax rate applied is %d%% ", (int)(taxRateApplied * 100));

	return 0;
}
*/