#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool check_leapyear (int year) {
    if (year%4 == 0 && year%100 != 0) {
        return true;
    }
    if(year%400 == 0) {
        return true;
    }
    return false;
}

int find_leapyear(int year) {
    if (year%100 == 0) {
        year = year - 4;
    }
    else {
        year = year - (year%4);
    }

    if (check_leapyear(year) == false) {
        find_leapyear(year);
    }

    return year;
}
// 2000 2004 2008 2104
// 1999 2001 2002 2003 2100 2101

int main(void) {

    int year;

    printf("Enter the year to be tested : ");
    scanf("%d", &year);

    while (true) {
        if (check_leapyear(year) == true) {
            printf("%d is a leap year", year);
            break;
        }
        else if (check_leapyear(year) == false) {
            printf("%d is not a leap year", year);
            printf("%d is a leap year ", find_leapyear(year));
            break;
        }
    }

    return 0;
}