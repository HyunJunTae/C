#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int year2(int year) {
	if (year % 4 == 0 && year % 100 != 0) {
		return year;
	}
	else if (year % 400 == 0) {
		return year;
	}

	if (year % 4 != 0) {
		year = year - (year % 4);
	}
	else if (year % 100 == 0) {
		year = year - 4;
	}
	year2(year);
}


int main(void) {
	int year;
	printf("Enter the year to be tested : ");
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0) {
		printf("%d is a leap year", year);
	}
	else if (year % 400 == 0) {
		printf("%d is a leap year", year);
	}
	else {
		printf("%d is not a leap year\n", year);
		year = year2(year);
		printf("%d is a leap year", year);

		return 0;

	}
}