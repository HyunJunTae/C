#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int digit2 = 1;

int palindrome (int num, int digit) {

    if (digit*10 > num) {
        return 1;
    }

    digit *= 10;
    digit2 /= 10;

    int num1, num2;
    num1 = (num / digit2) % 10;
    num2 = (num % digit) / (digit/10);

    if (num1 == num2) {
        return palindrome(num, digit);
    }
    else if (num1 != num2) {
        return 0;
    }

}


int main(void) {

    int num;
    printf("Input : "); 
    scanf("%d", &num);
    int digit = 1;

    while (digit2 < num) {
        digit2 *= 10;
    }
    
    palindrome(num, digit) == 1 ? printf("%d is a palindrome number", num) : printf("%d is not a palindrome number", num);

    return 0;
}