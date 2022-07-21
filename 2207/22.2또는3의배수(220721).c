#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int baesu(int a, int b) {

    int sum = 0;

    for (int i=a; i<=b; i++) {
        if (i%2 == 0 || i%3 == 0) {
            sum += i;
        }
    }

    return sum;
}

int main(void) {

    int num1, num2;

    printf("Input first number : ");
    scanf("%d", &num1);
    if (num1 < 1) {
        printf("Input is less than 1");
        return 0;
    }

    printf("Input second number : ");
    scanf("%d", &num2);
    if (num2 < 1) {
        printf("Input is less than 1");
        return 0;
    }
    
    int temp;
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Result : %d", baesu(num1, num2));

    return 0;
}