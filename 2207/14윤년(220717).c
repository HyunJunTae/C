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
    else {
        return year;
    }
    // 맨 처음에는 그냥 else 안쓰고 return year; 만 썼는데, 2101년 입력하면 자꾸 2100년이 return됨.
    // 2101 해서 한 번 걸러서 2100되고, false에 걸려서 한 번 다시 하게되도, 두 번째 함수에서 return 해도 main으로 돌아가는게 아니라
    // 첫 번째 함수로 돌아가게 되고, 돌아온 다음 첫 번째 함수에서 return year 하게되는데, 첫 번째 함수의 year은 여전히 2100. 그래서 2100이 return.
    
    
}
// 2000 2004 2008 2104
// 1999 2001 2002 2003 2100 2101

int main(void) {

    int year;

    printf("Enter the year to be tested : ");
    scanf("%d", &year);

    while (true) {
        if (check_leapyear(year) == true) {
            printf("%d is a leap year\n", year);
            break;
        }
        else if (check_leapyear(year) == false) {
            printf("%d is not a leap year\n", year);
            printf("%d is a leap year \n", find_leapyear(year));
            break;
        }
    }

    return 0;
}